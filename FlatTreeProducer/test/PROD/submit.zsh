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
  isExt1=$(echo ${pubdn} | grep 'ext1')
  isExt2=$(echo ${pubdn} | grep 'ext2')
  isExt3=$(echo ${pubdn} | grep 'ext3')
  isExt4=$(echo ${pubdn} | grep 'ext4')
  isExt5=$(echo ${pubdn} | grep 'ext5')
  nam=$(echo "${spl[1]}" | sed 's%-%_%g')
  reqn=$(echo "${nam}_${pubdn}" | sed 's%RunIISummer16MiniAODv3.*%MC2016%g' |\
  sed 's%RunIIFall17MiniAODv2.*%MC2017%g' |\
  sed 's%RunIIAutumn18MiniAOD.*%MC2018%g')
  if [[ ${isExt1} != '' ]]; then
    reqn=${reqn}_ext1
  fi
  if [[ ${isExt2} != '' ]]; then
    reqn=${reqn}_ext2
  fi
  if [[ ${isExt3} != '' ]]; then
    reqn=${reqn}_ext3
  fi
  if [[ ${isExt4} != '' ]]; then
    reqn=${reqn}_ext4
  fi
  if [[ ${isExt5} != '' ]]; then
    reqn=${reqn}_ext5
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
