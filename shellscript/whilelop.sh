#! /bin/bash
echo enter range
read num
i=0
while [ $i -le $num ]
do
  echo $i
  i=`expr $i + 1`
done

