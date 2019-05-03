#! /bin/bash
n=10
i=0
echo $n $i
while [ $i -lt $n ]
do
  echo $i
  i=`expr $i + 1`
done



