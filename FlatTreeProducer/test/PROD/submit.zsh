#!/bin/env zsh

ver="tHq2017_v2"

slist="list.txt"
pset="crabConfigTemplate.py"
prodv="/store/user/ntonon/FlatTree/${ver}/"

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
  reqn=$(echo "${nam}_${pubdn}" | sed 's%_RunIISummer16MiniAODv2.*%%g')
  
  #reqn="VHToNonbb"
    
  size=${#reqn}
  #echo $size
  
  if [ $size -gt 99 ] #If name is too long, change it !
  then
	reqn=$nam
  fi
  
  cat ${pset} | sed "s%INPUTDATASET%${i}%g" \
  | sed "s%OUTLFN%${prodv}%g" \
  | sed "s%REQUESTNAME%${reqn}%g" \
  | sed "s%PUBLISHDATANAME%${pubdn}%g" \
  > crabConfig.py
  
  echo "${reqn}"
  crab submit
  
done

rm -f crabConfig.py*
