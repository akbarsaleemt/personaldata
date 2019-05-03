#! /bin/bash
echo enter number for fibnaci
read num
i=0
num1=0
num2=1
new=0
while [ $i -lt $num ]
do
  echo $num1
  new=`expr $num1 + $num2`
  num1=$num2
  num2=$new
  i=`expr $i + 1`
done


