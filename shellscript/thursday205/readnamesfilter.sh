#! /bin/bash
##1. You are given a list of names.
#Your task is to read them into an array and 
#then filter out (remove) all the names 
#containing the user given letter
num=4
i=0
for((i=0; i<$num; i=i+1))
do
  echo "enter name $i"
  read name
  arr[$i]=$name
done
echo " enter aq character"
read ch
echo "names in array"
k=0
for i in ${arr[@]}
do 
  if [[ $i = *"$ch"* ]];
  then
    continue
 else
    arrr[$k]=$i
    k=`expr $k + 1`
    echo $i
  fi
done
echo "names in new array"
for i in ${arrr[@]}
do 
  echo $i
done



