from WMCore.Configuration import Configuration

config = Configuration()
config.section_('General')
config.General.transferOutputs = True
config.General.requestName = 'REQUESTNAME'
config.section_('JobType')

config.JobType.psetName = '../runFlatTreeMINIAOD_cfg.py'
config.JobType.pluginName = 'Analysis'
config.JobType.inputFiles = ['../conf.xml','../Fall17_17Nov2017_V32_94X_MC.db','../Fall17_17Nov2017_V32_94X_DATA.db','../L1PrefiringMaps_new.root']
#config.JobType.inputFiles = ['../conf.xml','../Fall17_17Nov2017_V8_MC.db','../Fall17_17Nov2017BCDEF_V6_DATA.db','../Fall17_17Nov2017_V32_94X_MC.db','../Fall17_17Nov2017_V32_94X_DATA.db','../L1PrefiringMaps_new.root']
#config.JobType.outputFiles = ['output.root']
config.JobType.pyCfgParams = ['isData=0','runAK10=0','datasetsYear=2017']
config.section_('Data')

config.Data.totalUnits = -1 #nof files (or lumisection) to analyze in total (-1=all)

##-- For MC
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1 #MC -- nof files in each job

#-- For DATA
#config.Data.splitting = 'LumiBased'
#config.Data.unitsPerJob = 20 #Data -- nof LS in each job

config.Data.publication = False

config.Data.inputDataset = 'INPUTDATASET'

config.Data.outputDatasetTag = 'PUBLISHDATANAME'
config.Data.publishDBS = 'https://cmsweb.cern.ch/dbs/prod/phys03/DBSWriter'
config.Data.outLFNDirBase = 'OUTLFN'

#config.Data.allowNonValidInputDataset = True #Un-comment if running on dataset not in 'VALID' status

#config.Data.lumiMask = 'GRL/Cert_294927-306462_13TeV_PromptReco_Collisions17_JSON.txt' #For data

config.section_('User')
config.section_('Site')
config.Site.storageSite = 'T2_FR_IPHC'

#config.Data.ignoreLocality = True
#config.Data.inputDBS = 'phys03'
