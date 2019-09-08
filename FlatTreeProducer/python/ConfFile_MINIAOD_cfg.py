import FWCore.ParameterSet.Config as cms

#####################
#  Options parsing  #
#####################

from FWCore.ParameterSet.VarParsing import VarParsing
import os, sys

options = VarParsing('analysis')
options.register('isData',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Run on real data')
options.register('applyMETFilters',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Apply MET filters')
options.register('applyJEC',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Apply JEC corrections')
options.register('runAK10',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Add AK10 jets')
options.register('datasetsYear','2016',VarParsing.multiplicity.singleton,VarParsing.varType.string,'Run on 2016, 2017 or 2018 samples')
options.register('outFile','output.root',VarParsing.multiplicity.singleton,VarParsing.varType.string,'Output file name')

options.register('makeLHEmapping',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Create mapping of LHE id <-> scale/LHAPDF id')
options.register('printLHEcontent',False,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Printout of LHE infos')
options.register('samplename','',VarParsing.multiplicity.singleton,VarParsing.varType.string,'User-defined samplename')

options.register('runQG',True,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Run QGTagger')
options.register('runDNN',True,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Run DNN taggers')

options.register('fillMCScaleWeight',True,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Fill PDF weights')
options.register('fillPUInfo',True,VarParsing.multiplicity.singleton,VarParsing.varType.bool,'Fill PU info')
options.register('nPDF',-1,VarParsing.multiplicity.singleton,VarParsing.varType.int,'nPDF')
options.register('confFile','conf.xml',VarParsing.multiplicity.singleton,VarParsing.varType.string,'Flattree variables configuration')
options.register('bufferSize',32000,VarParsing.multiplicity.singleton,VarParsing.varType.int,'Buffer size for branches of the flat tree')
options.parseArguments()

#-- Can use these filenames only to produce LHE mapping with proper naming -- 
#THQ_ctcvcp_4f_Hincl_13TeV_madgraph_pythia8
#THW_ctcvcp_5f_Hincl_13TeV_madgraph_pythia8
#ttHJetToNonbb_M125_TuneCP5_13TeV_amcatnloFXFX_madspin_pythia8
#ZZTo4L_13TeV_powheg_pythia8
#THW_ctcvcp_5f_Hincl_13TeV_madgraph_pythia8
#TTWJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8
#TTWJetsToLNu_TuneCP5_PSweights_13TeV-amcatnloFXFX-madspin-pythia8
#WZTo3LNu_TuneCP5_13TeV-amcatnloFXFX-pythia8
#tZq_ll_4f_ckm_NLO_TuneCP5_PSweights_13TeV-amcatnlo-pythia8
#TTZToLLNuNu_M-10_TuneCP5_13TeV-amcatnlo-pythia8
#TTZToLL_M-1to10_TuneCP5_13TeV-amcatnlo-pythia8
#TTWW_TuneCP5_13TeV-madgraph-pythia8
#ST_tWll_5f_LO_TuneCP5_PSweights_13TeV-madgraph-pythia8 -> no LHE found
#TTWH_TuneCP5_13TeV-madgraph-pythia8
#TTGJets_TuneCP5_13TeV-amcatnloFXFX-madspin-pythia8
#TGJets_leptonDecays_TuneCP5_PSweights_13TeV-amcatnlo-pythia8
#WGToLNuG_TuneCP5_13TeV-madgraphMLM-pythia8
#WWW_4F_TuneCP5_13TeV-amcatnlo-pythia8
#WWZ_4F_TuneCP5_13TeV-amcatnlo-pythia8
#WZZ_TuneCP5_13TeV-amcatnlo-pythia8
#ZZZ_TuneCP5_13TeV-amcatnlo-pythia8
#TTTT_TuneCP5_13TeV-amcatnlo-pythia8
#WpWpJJ_EWK-QCD_TuneCP5_13TeV-madgraph-pythia8
#WW_DoubleScattering_13TeV-pythia8_TuneCP5 -> no LHE found
#WZG_TuneCP5_13TeV-amcatnlo-pythia8
#TTWH_TuneCP5_13TeV-madgraph-pythia8
#TTTW_TuneCP5_13TeV-madgraph-pythia8
#GluGluHToZZTo4L_M125_13TeV_powheg2_JHUGenV7011_pythia8

##########################
#  Global configuration  #
##########################

process = cms.Process("FlatTree")

process.load("FWCore.MessageService.MessageLogger_cfi")
process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32(-1) )
process.MessageLogger.cerr.FwkReport.reportEvery = 1000
#process.MessageLogger.cerr.threshold = 'ERROR'
process.MessageLogger.categories += cms.vstring('JetPtMismatch', 'MissingJetConstituent', 'JetPtMismatchAtLowPt', 'NullTransverseMomentum')
process.MessageLogger.cerr.JetPtMismatch = cms.untracked.PSet(limit = cms.untracked.int32(0))
process.MessageLogger.cerr.MissingJetConstituent = cms.untracked.PSet(limit = cms.untracked.int32(0))
process.MessageLogger.cerr.JetPtMismatchAtLowPt = cms.untracked.PSet(limit = cms.untracked.int32(0))
process.MessageLogger.cerr.NullTransverseMomentum = cms.untracked.PSet(limit = cms.untracked.int32(0))
#process.MessageLogger.suppressWarning = cms.untracked.vstring(["JetPtMismatchAtLowPt","NullTransverseMomentum"])

is2016 = (options.datasetsYear == "2016")
is2017 = (options.datasetsYear == "2017")
is2018 = (options.datasetsYear == "2018")

process.load('Configuration.StandardSequences.FrontierConditions_GlobalTag_condDBv2_cff')
from Configuration.AlCa.GlobalTag import GlobalTag

if options.isData:    
    if is2016: process.GlobalTag.globaltag = '94X_dataRun2_v10'
    elif is2017: process.GlobalTag.globaltag = '94X_dataRun2_v11' 
    elif is2018: process.GlobalTag.globaltag = '102X_dataRun2_Sep2018ABC_v2'	   
else:    
    if is2016: process.GlobalTag.globaltag = '94X_mcRun2_asymptotic_v3'  
    elif is2017: process.GlobalTag.globaltag = '94X_mc2017_realistic_v17' 
    elif is2018: process.GlobalTag.globaltag = '102X_upgrade2018_realistic_v18'

if is2016: corName="Summer16_07Aug2017_V11_MC"
elif is2017: corName="Fall17_17Nov2017_V32_94X_MC"
elif is2018: corName="Autumn18_V8_MC"    
if options.isData:    
    if is2016: corName="Summer16_07Aug2017All_V11_DATA"
    elif is2017: corName="Fall17_17Nov2017_V32_94X_DATA"
    elif is2018: corName="Autumn18_RunABCD_V8_DATA"

corTag="JetCorrectorParametersCollection_"+corName
dBFile=corName+".db"

process.load("CondCore.CondDB.CondDB_cfi")
from CondCore.DBCommon.CondDBSetup_cfi import *
process.jec = cms.ESSource("PoolDBESSource",
                           DBParameters = cms.PSet(
                           messageLevel = cms.untracked.int32(0)
                           ),
                           timetype = cms.string('runnumber'),
                           toGet = cms.VPSet(
                           cms.PSet(
                                    record = cms.string('JetCorrectionsRecord'),
                                    tag    = cms.string(corTag+"_AK4PF"),
                                    label  = cms.untracked.string('AK4PF')
                                    ),
                           cms.PSet(
                                    record = cms.string('JetCorrectionsRecord'),
                                    tag    = cms.string(corTag+"_AK4PFchs"),
                                    label  = cms.untracked.string('AK4PFchs')
                                    ),
                           cms.PSet(
                                    record = cms.string('JetCorrectionsRecord'),
                                    tag    = cms.string(corTag+"_AK8PF"),
                                    label  = cms.untracked.string('AK8PF')
                                    ),
                           cms.PSet(
                                    record = cms.string('JetCorrectionsRecord'),
                                    tag    = cms.string(corTag+"_AK8PFchs"),
                                    label  = cms.untracked.string('AK8PFchs')
                                    ),
                           ),
                           connect = cms.string("sqlite_file:"+dBFile)
)
process.es_prefer_jec = cms.ESPrefer('PoolDBESSource','jec')                           

process.load('Configuration.Geometry.GeometryRecoDB_cff')
process.load('Configuration.StandardSequences.Services_cff')
process.load("TrackingTools/TransientTrack/TransientTrackBuilder_cfi")
process.load("Configuration.StandardSequences.MagneticField_cff")
process.load("Geometry.CaloEventSetup.CaloTowerConstituents_cfi")

corList = cms.vstring(['L1FastJet', 'L2Relative', 'L3Absolute'])
if options.isData:
    corList = cms.vstring(['L1FastJet', 'L2Relative', 'L3Absolute', 'L2L3Residual'])

from PhysicsTools.PatAlgos.tools.jetTools import updateJetCollection

updateJetCollection(
   process,
   jetSource = cms.InputTag('slimmedJets'),
   pvSource = cms.InputTag('offlineSlimmedPrimaryVertices'),
   svSource = cms.InputTag('slimmedSecondaryVertices'),
   jetCorrections = ('AK4PFchs', corList, 'None'),
   btagDiscriminators = [
      	'pfDeepFlavourJetTags:probb',
      	'pfDeepFlavourJetTags:probbb',
      	'pfDeepFlavourJetTags:problepb',
      	'pfDeepFlavourJetTags:probc',
      	'pfDeepFlavourJetTags:probuds',
      	'pfDeepFlavourJetTags:probg'
      ],
   postfix='NewDFTraining'
)

updateJetCollection(
    process,
    jetSource = cms.InputTag('slimmedJets'),
    labelName = 'UpdatedJECAK8',
    jetCorrections = ('AK8PFchs', corList, 'None')
)

#jetsNameAK4="selectedUpdatedPatJetsUpdatedJEC"
#jetsNameAK4="updatedPatJetsUpdatedJEC"
jetsNameAK4="selectedUpdatedPatJetsNewDFTraining"
#jetsNameAK4="slimmedJets"
jetsNameAK8="selectedUpdatedPatJetsUpdatedJECAK8"
#jetsNameAK8="slimmedJets"
#jetsNameAK10="patJetsReapplyJECAK10"
jetsNameAK10="selectedPatJetsAK10PFCHS"

########################
#  Additional modules  #
########################

tauTag = ["dR0p32017v2","deepTau2017v2"]
if not options.runDNN:
    tauTag = ["dR0p32017v2"]

import RecoTauTag.RecoTau.tools.runTauIdMVA as tauIdConfig
tauIdEmbedder = tauIdConfig.TauIDEmbedder(process, cms, 
                debug = False,
                updatedTauName = "NewTauIDsEmbedded",
                toKeep = tauTag
)
tauIdEmbedder.runTauID()

if not options.isData:
    process.load("SimGeneral.HepPDTESSource.pythiapdt_cfi")
            
    from PhysicsTools.JetMCAlgos.HadronAndPartonSelector_cfi import selectedHadronsAndPartons
    process.selectedHadronsAndPartons = selectedHadronsAndPartons.clone(
            particles = "prunedGenParticles"
    )
                                    
    from PhysicsTools.JetMCAlgos.AK4PFJetsMCFlavourInfos_cfi import ak4JetFlavourInfos
    process.genJetFlavourInfos = ak4JetFlavourInfos.clone(
            jets = "slimmedGenJets"
    )
    
    from PhysicsTools.JetMCAlgos.GenHFHadronMatcher_cff import matchGenBHadron
    process.matchGenBHadron = matchGenBHadron.clone(
            genParticles = "prunedGenParticles",
            jetFlavourInfos = "genJetFlavourInfos"
    )
                                                                                                
    from PhysicsTools.JetMCAlgos.GenHFHadronMatcher_cff import matchGenCHadron
    process.matchGenCHadron = matchGenCHadron.clone(
            genParticles = "prunedGenParticles",
            jetFlavourInfos = "genJetFlavourInfos"
    )

from PhysicsTools.PatUtils.tools.runMETCorrectionsAndUncertainties import runMetCorAndUncFromMiniAOD
if is2017:
    runMetCorAndUncFromMiniAOD(process,
                               isData = options.isData,
                               fixEE2017 = True,
                               fixEE2017Params = {'userawPt': True, 'ptThreshold':50.0, 'minEtaThreshold':2.65, 'maxEtaThreshold':3.139},
                               postfix = "ModifiedMET"
    )
else:
    runMetCorAndUncFromMiniAOD(process,
                               isData = options.isData,
                               fixEE2017 = False,
                               fixEE2017Params = {'userawPt': True, 'ptThreshold':50.0, 'minEtaThreshold':2.65, 'maxEtaThreshold': 3.139},
                               postfix = "ModifiedMET"
    )

from RecoEgamma.EgammaTools.EgammaPostRecoTools import setupEgammaPostRecoSeq

if is2016: setupEgammaPostRecoSeq(process,
                                  applyEnergyCorrections=False,
                                  applyVIDOnCorrectedEgamma=False,
                                  runEnergyCorrections=False,
                                  runVID=True,                                  
                                  era='2016-Legacy')
elif is2017: setupEgammaPostRecoSeq(process,
                                    applyEnergyCorrections=False,
                                    applyVIDOnCorrectedEgamma=False,
                                    runEnergyCorrections=False,
                                    runVID=True,
                                    era='2017-Nov17ReReco')
elif is2018: setupEgammaPostRecoSeq(process,
                                    applyEnergyCorrections=False,
                                    applyVIDOnCorrectedEgamma=False,
                                    runEnergyCorrections=False,
                                    runVID=True,
                                    era='2018-Prompt')

#####################
# MET Significance  #
#####################
process.load("RecoMET/METProducers.METSignificance_cfi")
process.load("RecoMET/METProducers.METSignificanceParams_cfi")
from RecoMET.METProducers.testInputFiles_cff import recoMETtestInputFiles

#######################
# AK10 collection     #
#######################
if options.runAK10:
    from JMEAnalysis.JetToolbox.jetToolbox_cff import jetToolbox
    jetToolbox( process, 'ak10', 'ak10JetSubs', 'out', runOnMC=(not options.isData),
                addPruning=True, addSoftDrop=True , addPrunedSubjets=True, addSoftDropSubjets=True,
                JETCorrPayload='AK3Pachs', subJETCorrPayload='AK10PFchs', JETCorrLevels=['L1FastJet', 'L2Relative', 'L3Absolute'],
                addNsub=True, maxTau=6, addTrimming=True, addFiltering=True,
                addEnergyCorrFunc=True, maxECF=5 )    
                
#######################
# Quark gluon tagging #
#######################
if options.runQG:

    from CondCore.CondDB.CondDB_cfi import CondDB

    QGPoolDBESSource = cms.ESSource("PoolDBESSource",
          CondDB.clone(
            connect = cms.string('frontier://FrontierProd/CMS_CONDITIONS'),
          ),
          toGet = cms.VPSet(
            cms.PSet(
              record = cms.string('QGLikelihoodRcd'),
              tag    = cms.string('QGLikelihoodObject_v1_AK4PFchs_2017'), # to be used for the full Run2
              label  = cms.untracked.string('QGL_AK4PFchs'),
            ),
          ),
    )
    
    es_prefer_qgl = cms.ESPrefer("PoolDBESSource", "QGPoolDBESSource")

    process.load('RecoJets.JetProducers.QGTagger_cfi')
    process.QGTagger.srcJets          = cms.InputTag(jetsNameAK4)
    process.QGTagger.jetsLabel        = cms.string('QGL_AK4PFchs')

#########################
# Prefiring probability #
#########################

prefName = ""
if is2016: prefName = "2016BtoH"
elif is2017: prefName = "2017BtoF"

if is2016 or is2017:
    from PhysicsTools.PatUtils.l1ECALPrefiringWeightProducer_cfi import l1ECALPrefiringWeightProducer
    process.prefiringweight = l1ECALPrefiringWeightProducer.clone(
       DataEra = cms.string(prefName),
       UseJetEMPt = cms.bool(False),
       PrefiringRateSystematicUncty = cms.double(0.2),
       SkipWarnings = False
    )
elif is2018:
    process.prefiringweight = cms.Sequence()

###########
#  Input  #
###########

fileName = 'file:F24F2D5E-DDEC-E811-AF50-90B11C08AD7D.root'
if is2017:
    fileName = 'file:7C60AC2B-E76F-E811-9D60-0025905B860C.root'
if is2018:
    fileName = 'file:A912BBFA-D1A1-8544-A430-8C98C0767737.root'

process.source = cms.Source("PoolSource",
    duplicateCheckMode = cms.untracked.string("noDuplicateCheck"), # WARNING -- for test only !
    fileNames = cms.untracked.vstring( fileName )
#    ,skipEvents=cms.untracked.uint32(14000)
)

############
#  Output  #
############

process.TFileService = cms.Service("TFileService", fileName = cms.string(options.outFile))

process.options   = cms.untracked.PSet(
    wantSummary = cms.untracked.bool(False),
    allowUnscheduled = cms.untracked.bool(True)	 # needed for ak10 computation (JMEAnalysis/JetToolbox)
)

process.slimmedPatTriggerUnpacked = cms.EDProducer('PATTriggerObjectStandAloneUnpacker',
                                                   patTriggerObjectsStandAlone = cms.InputTag('slimmedPatTrigger'),
                                                   triggerResults = cms.InputTag('TriggerResults::HLT'),
                                                   unpackFilterLabels = cms.bool(True)
)

rhoName="fixedGridRhoFastjetAll"

#############################
#  Flat Tree configuration  #
#############################

process.FlatTree = cms.EDAnalyzer('FlatTreeProducer',

                  dataFormat        = cms.string("MINIAOD"),

                  bufferSize        = cms.int32(options.bufferSize),
                  confFile          = cms.string(options.confFile),
                  runDNN            = cms.bool(options.runDNN),

                  isData            = cms.bool(options.isData),
                  applyMETFilters   = cms.bool(options.applyMETFilters),
                  fillMCScaleWeight = cms.bool(options.fillMCScaleWeight),
                  fillPUInfo	    = cms.bool(options.fillPUInfo),
                  nPDF              = cms.int32(options.nPDF),
                  datasetsYear      = cms.string(options.datasetsYear),

                  makeLHEmapping  = cms.bool(options.makeLHEmapping),
                  samplename        = cms.string(options.samplename),
		  printLHEcontent = cms.bool(options.printLHEcontent),
                  
                  vertexInput              = cms.InputTag("offlineSlimmedPrimaryVertices"),
                  electronInput            = cms.InputTag("slimmedElectrons"),
                  electronPATInput         = cms.InputTag("slimmedElectrons"),
                  
                  filterTriggerNames       = cms.untracked.vstring("*"),
                  
                  muonInput                = cms.InputTag("slimmedMuons"),
                  tauInput                 = cms.InputTag("NewTauIDsEmbedded"),
                  jetInput                 = cms.InputTag(jetsNameAK4),
                  jetPuppiInput            = cms.InputTag("slimmedJetsPuppi"),
                  ak8jetInput              = cms.InputTag(jetsNameAK8),
                  ak10jetInput             = cms.InputTag(jetsNameAK10),
                  genJetInput              = cms.InputTag("slimmedGenJets"),
                  jetFlavorMatchTokenInput = cms.InputTag("jetFlavourMatch"),
                  metInput                 = cms.InputTag("slimmedMETsModifiedMET"),
                  metPuppiInput            = cms.InputTag("slimmedMETsPuppi"),
                  metNoHFInput             = cms.InputTag("slimmedMETsNoHF"),
                  metSigInput              = cms.InputTag("METSignificance"),
                  metCovInput              = cms.InputTag("METSignificance","METCovariance"),
                  rhoInput                 = cms.InputTag(rhoName),
                  genParticlesInput        = cms.InputTag("prunedGenParticles"),
                  genEventInfoInput        = cms.InputTag("generator"),
                  LHEEventProductInput     = cms.InputTag("externalLHEProducer"),
                  bsInput                  = cms.InputTag("offlineBeamSpot"),
                  pfcandsInput             = cms.InputTag("packedPFCandidates"),
                  hConversionsInput        = cms.InputTag("reducedEgamma","reducedConversions"),
                  puInfoInput		   = cms.InputTag("slimmedAddPileupInfo"),
                  objects                  = cms.InputTag("slimmedPatTriggerUnpacked"),
                  
                  genTTXJets                    = cms.InputTag("slimmedGenJets"),
                  genTTXBHadJetIndex            = cms.InputTag("matchGenBHadron","genBHadJetIndex"),
                  genTTXBHadFlavour             = cms.InputTag("matchGenBHadron","genBHadFlavour"),
                  genTTXBHadFromTopWeakDecay    = cms.InputTag("matchGenBHadron","genBHadFromTopWeakDecay"),
                  genTTXBHadPlusMothers         = cms.InputTag("matchGenBHadron","genBHadPlusMothers"),
                  genTTXBHadPlusMothersIndices  = cms.InputTag("matchGenBHadron","genBHadPlusMothersIndices"),
                  genTTXBHadIndex               = cms.InputTag("matchGenBHadron","genBHadIndex"),
                  genTTXBHadLeptonHadronIndex   = cms.InputTag("matchGenBHadron","genBHadLeptonHadronIndex"),
                  genTTXBHadLeptonViaTau        = cms.InputTag("matchGenBHadron","genBHadLeptonViaTau"),
                  genTTXCHadJetIndex            = cms.InputTag("matchGenCHadron","genCHadJetIndex"),
                  genTTXCHadFlavour             = cms.InputTag("matchGenCHadron","genCHadFlavour"),
                  genTTXCHadFromTopWeakDecay    = cms.InputTag("matchGenCHadron","genCHadFromTopWeakDecay"),
                  genTTXCHadBHadronId           = cms.InputTag("matchGenCHadron","genCHadBHadronId")
)

##########
#  Path  #
##########

process.runQG = cms.Sequence()
if options.runQG:
    process.runQG = cms.Sequence(process.QGTagger)
    
process.p = cms.Path(
                     process.egammaPostRecoSeq+
                     process.patJetCorrFactorsNewDFTraining+
                     process.updatedPatJetsNewDFTraining+
                     process.pfImpactParameterTagInfosNewDFTraining+
                     process.pfInclusiveSecondaryVertexFinderTagInfosNewDFTraining+
                     process.pfDeepCSVTagInfosNewDFTraining+
                     process.pfDeepFlavourTagInfosNewDFTraining+
                     process.pfDeepFlavourJetTagsNewDFTraining+
                     process.patJetCorrFactorsTransientCorrectedNewDFTraining+
                     process.updatedPatJetsTransientCorrectedNewDFTraining+
                     process.selectedUpdatedPatJetsNewDFTraining+
                     process.rerunMvaIsolationSequence+
                     process.NewTauIDsEmbedded+
                     getattr(process,"NewTauIDsEmbedded")+
                     process.fullPatMetSequenceModifiedMET+
                     process.METSignificance+
                     process.runQG+
                     process.slimmedPatTriggerUnpacked+
                     process.prefiringweight+
                     process.selectedHadronsAndPartons+
                     process.genJetFlavourInfos+
                     process.matchGenBHadron+
                     process.matchGenCHadron+
                     process.FlatTree
                   )
