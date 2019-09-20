#!/bin/env zsh

ver="Salmon2"

slist="list.txt"
pset="crabConfigTemplate.py"
prodv="/store/user/kskovpen/FlatTree/${ver}/"

rm -f crabConfig.py*

samp=()
is=1
cat ${slist} | while read line
do
  samp[${is}]=${line}
  is=$[$is+1]
done

for i in ${samp}
do
  spl=($(echo $i | tr "/" "\n"))
  pubdn=$(echo "${spl[2]}_${spl[3]}" | sed 's%-%_%g')
  nam=$(echo "${spl[1]}" | sed 's%-%_%g')
  reqn=$(echo "${nam}_${pubdn}" | sed 's%RunIISummer16MiniAODv3-PUMoriond17_94X_mcRun2_asymptotic_v3.*%MC2016%g' |\
  sed 's%RunIISummer16MiniAODv3_PUMoriond17_94X_mcRun2_asymptotic_v3.*%MC2016%g' |\
  sed 's%RunIIFall17MiniAODv2-PU2017_12Apr2018_94X_mc2017_realistic_v14.*%MC2017%g' |\
  sed 's%RunIIFall17MiniAODv2_PU2017_12Apr2018_94X_mc2017_realistic_v14.*%MC2017%g' |\
  sed 's%RunIIAutumn18MiniAOD-102X_upgrade2018_realistic_v15.*%MC2018%g')
  
  cat ${pset} | sed "s%INPUTDATASET%${i}%g" \
  | sed "s%OUTLFN%${prodv}%g" \
  | sed "s%REQUESTNAME%${reqn}%g" \
  | sed "s%PUBLISHDATANAME%${pubdn}%g" \
  > crabConfig.py
  
  echo "${reqn}"
  crab submit
  
done

rm -f crabConfig.py*
