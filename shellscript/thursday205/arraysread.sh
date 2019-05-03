#! /bin/bash
num=4
i=0
for((i=0; i<$num; i=i+1))
do
  echo "enter name $i"
  read name
  arr[$i]=$name
done
echo "names in array"
for i in ${arr[@]}
do 
  echo $i
done


