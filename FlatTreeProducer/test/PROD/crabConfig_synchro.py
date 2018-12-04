from WMCore.Configuration import Configuration

config = Configuration()
config.section_('General')
config.General.transferOutputs = True
config.General.requestName = 'SYNCHRO'
config.section_('JobType')

config.JobType.psetName = '../runFlatTreeMINIAOD_cfg.py'
config.JobType.pluginName = 'Analysis'
config.JobType.inputFiles = ['../conf.xml','../Fall17_17Nov2017_V6_MC.db','../Fall17_17Nov2017BCDEF_V6_DATA.db']
#config.JobType.outputFiles = ['output.root']
config.JobType.pyCfgParams = ['isData=0','runAK10=0']
config.section_('Data')

config.Data.totalUnits = -1 #nof files (or lumisection) to analyze in total (-1=all)

##-- For MC
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 1 #MC -- nof files in each job

#-- For DATA
#config.Data.splitting = 'LumiBased'
#config.Data.unitsPerJob = 20 #Data -- nof LS in each job

config.Data.publication = False

config.Data.userInputFiles = open('./FileLists/Synchro/files_TTH_synchro.txt').readlines() #Interactive reading #For CRAB, specify this file as 'list' in submit_synchro.sh

config.Data.outputDatasetTag = 'TTH_synchro'
config.Data.publishDBS = 'https://cmsweb.cern.ch/dbs/prod/phys03/DBSWriter'
config.Data.outLFNDirBase = 'OUTLFN'


config.section_('User')
config.section_('Site')
config.Site.storageSite = 'T2_FR_IPHC'

#config.Data.ignoreLocality = True
#config.Data.inputDBS = 'phys03'


#----------------- 
#### To run on private samples ####

# Use "Data.userInputFiles = open('/path/to/local/file.txt').readlines()". file.txt will contain the list of files to process (one file per line, no quotes, no commas).
# Can not be used with option "Data.inputDataset"
# Use option "Data.outputPrimaryDataset" to set output name
# Recommended : use option ""Site.whitelist" to run at the storage site (faster)
#-----------------
