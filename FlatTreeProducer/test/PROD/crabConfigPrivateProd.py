from WMCore.Configuration import Configuration

config = Configuration()
config.section_('General')
config.General.transferOutputs = True
config.General.requestName = 'ST_tWll' #ST_tWll / VHToNonbb / ...
config.section_('JobType')

config.JobType.psetName = '../runFlatTreeMINIAOD_cfg.py'
config.JobType.pluginName = 'Analysis'
config.JobType.inputFiles = ['../conf.xml','../Fall17_17Nov2017_V8_MC.db','../Fall17_17Nov2017BCDEF_V6_DATA.db']
#config.JobType.outputFiles = ['output.root']
config.JobType.pyCfgParams = ['isData=0','runAK10=0']
config.section_('Data')

config.Data.totalUnits = -1 #nof files (or lumisection) to analyze in total
#config.Data.totalUnits = 10

config.Data.unitsPerJob = 1

config.Data.splitting = 'FileBased'

config.Data.publication = False

#files_ST_tWll
#files_VHToNonbb
#...
config.Data.userInputFiles = open('./FileLists/PrivateProd/files_ST_tWll.txt').readlines()

#ST_tWll_5f_LO_TuneCP5_PSweights_13TeV_madgraph_pythia8_Fall17
#VHToNonbb_M125_13TeV_amcatnloFXFX_madspin_pythia8_Fall17
#...
config.Data.outputPrimaryDataset = 'ST_tWll_5f_LO_TuneCP5_PSweights_13TeV_madgraph_pythia8_Fall17'
config.Data.outputDatasetTag = 'ST_tWll_5f_LO_TuneCP5_PSweights_13TeV_madgraph_pythia8_Fall17'

config.Data.publishDBS = 'https://cmsweb.cern.ch/dbs/prod/phys03/DBSWriter'
config.Data.outLFNDirBase = '/store/user/ntonon/FlatTree/tHq2017_v4/'


config.section_('User')
config.section_('Site')
config.Site.storageSite = 'T2_FR_IPHC'

#config.Data.ignoreLocality = True
#config.Data.inputDBS = 'phys03'


#----------------- 
#### To run on private samples ####

# Use "Data.userInputFiles = open('/path/to/local/file.txt').readlines()". file.txt will contain the list of files to process (one file per line, no quotes, no commas).
# Can not be used with option "Data.inputDataset"
# Use option "Data.outputPrimaryDataset" (+outputDatasetTag?) to set output name
# Recommended : use option "Site.whitelist" to run at the storage site (faster)

#==> EXECUTE MANUALLY : "crab submit crabConfigPrivateProd.py" !
#-----------------
