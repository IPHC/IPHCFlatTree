# FlatTreeProducer installation and setup

README for the IPHCFllatTree -- tHq branch, describing the basic steps to run the FlatTree production.

*Do not forget to source :*
```
source /cvmfs/cms.cern.ch/cmsset_default.sh
source /cvmfs/cms.cern.ch/crab3/crab.sh
```

*To create proxy :*
```
voms-proxy-init -voms cms -hours 192
```

## FlatTreeProducer

Installing and running the IPHCFlatTree code to produce Flat Trees. Using branch "tHq" (based on tag "Walrus-patch-2").

### Installation

```
cd /home-pbs/username/
mkdir MyAnalysis
cd MyAnalysis

# CMSSW Release
RELEASE=10_2_16

# Setup release
cmsrel CMSSW_$RELEASE
cd CMSSW_X_Y_Z/src
cmsenv
git cms-init

# Egamma
git cms-merge-topic cms-egamma:EgammaPostRecoTools
# Egamma energy corrections
git clone git@github.com:cms-egamma/EgammaAnalysis-ElectronTools.git EgammaAnalysis/ElectronTools/data
cd EgammaAnalysis/ElectronTools/data
git checkout ScalesSmearing2018_Dev
cd -
git cms-merge-topic cms-egamma:EgammaPostRecoTools_dev

# Tools needed for AK10 jet collection
git clone git@github.com:cms-jet/JetToolbox.git JMEAnalysis/JetToolbox -b jetToolbox_102X_v1

# Include DeepTauv2
git cms-merge-topic -u cms-tau-pog:CMSSW_10_2_X_tau-pog_DeepTau2017v2

# Clone this repo
git clone https://github.com/IPHC/IPHCFlatTree.git

# Compile the monster (use -jN for multicore)
scram b -j5
```


### Set-up


```
cd XXX/IPHCFlatTree/FlatTreeProducer/test/PROD
```
* **list.txt** - create it and add the names of the datasets/samples you want to process, e.g. : 
```
...
/THQ_Hincl_13TeV-madgraph-pythia8_TuneCUETP8M1/RunIISummer16MiniAODv2-PUMoriond17_80X_mcRun2_asymptotic_2016_TrancheIV_v6-v1/MINIAODSIM
...
```
(NB : if you add several samples at once, they will each yield a separate task. The merging has to be done at the NTupleProducer level)


* **submit.zsh** - modify the following :
```
...
slist="list.txt" //Text file containing datasets names
ver="XXX" //Version name, e.g. "tHqProd"
prodv="/store/user/YOUR_USERNAME/FlatTree/${ver}/" //Will store output files on dpm/store
...
```

* **crabConfigTemplate.py** - modify the following :
```
...
isData=0 #Or 1 for data
...
config.Data.unitsPerJob = 2 #For MC, ~2 MC files per job
config.Data.unitsPerJob = 2 #For Data, ~20 lumisections per job
...
config.Data.splitting = 'FileBased' #For MC
#config.Data.splitting = 'LumiBased' #For data
...
#config.Data.lumiMask = 'GRL/Cert_271036-284044_13TeV_PromptReco_Collisions16_JSON.txt' #Comment for MC ?
...
```


### Interactive test

Can use a modified cfg file in directory test/ (else, errors from some relative paths), to check that you can access the data. Some lines needs to be changed (sample name, etc.)

```
cmsRun crabConfig_test.py
```


### Launch the jobs

```
./submit.zsh
```
