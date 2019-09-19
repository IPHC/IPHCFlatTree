from WMCore.Configuration import Configuration

config = Configuration()
config.section_('General')
config.General.transferOutputs = True
config.General.requestName = 'REQUESTNAME'
config.section_('JobType')

config.JobType.psetName = '../runFlatTreeMINIAOD_cfg.py'
config.JobType.pluginName = 'Analysis'
config.JobType.inputFiles = ['../conf.xml','../Summer16_07Aug2017All_V11_DATA.db','../Summer16_07Aug2017_V11_MC.db','../Fall17_17Nov2017_V32_94X_DATA.db','../Fall17_17Nov2017_V32_94X_MC.db','../Autumn18_RunABCD_V8_DATA.db','../Autumn18_V8_MC.db']
#config.JobType.outputFiles = ['output.root']
config.JobType.pyCfgParams = ['isData=1','runAK10=0','datasetsYear=2016','applyMETFilters=1','runDNN=1']
config.section_('Data')

config.Data.totalUnits = -1 #nof files (or lumisection) to analyze in total (-1=all)

##-- For MC
#config.Data.splitting = 'FileBased'
#config.Data.unitsPerJob = 1 #MC -- nof files in each job

#-- For DATA
config.Data.splitting = 'LumiBased'
config.Data.unitsPerJob = 50 #Data -- nof LS in each job

config.Data.publication = False

config.Data.inputDataset = 'INPUTDATASET'

config.Data.outputDatasetTag = 'PUBLISHDATANAME'
config.Data.publishDBS = 'https://cmsweb.cern.ch/dbs/prod/phys03/DBSWriter'
config.Data.outLFNDirBase = 'OUTLFN'

#config.Data.allowNonValidInputDataset = True #Un-comment if running on dataset not in 'VALID' status

config.Data.lumiMask = 'GRL/Cert_271036-284044_13TeV_23Sep2016ReReco_Collisions16_JSON.txt' #For data

config.section_('User')
config.section_('Site')
config.Site.storageSite = 'T2_BE_IIHE'

#config.Data.ignoreLocality = True
#config.Data.inputDBS = 'phys03'
