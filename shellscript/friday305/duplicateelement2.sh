#!/bin/bash
<<comment
arr[0]=12
arr[1]=32
arr[2]=34
arr[3]=12
arr[4]=32
#comment
#arr=(hello hai how  u)
comment
arr=(12 34 12 35 34)
for ((i=0; i< ${#arr[@]}-1; i=i+1))
do
  for((j=i+1; j<${#arr[@]}; j=j+1))
  do
#<<comment
 if [ ${arr[$i]} -eq ${arr[$j]} ]
    then
      echo "arr[$j]=${arr[$j]} is duplicate number"
    fi
#comment
  echo $i $j
  echo arr[$i] arr[$j]
  echo ${arr[$i]} ${arr[$j]}
  done
done


