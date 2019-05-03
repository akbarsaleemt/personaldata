#!/bin/bash
arr=(12 34 12 35 34)
for ((i=0; i< ${#arr[@]}-1; i=i+1))
do
  for((j=i+1; j<${#arr[@]}; j=j+1))
  do
 if [ ${arr[$i]} -eq ${arr[$j]} ]
    then
      echo "arr[$j]=${arr[$j]} is duplicate number"
    fi
  done
done


