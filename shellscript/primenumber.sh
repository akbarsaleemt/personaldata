#! /bin/bash
echo enter number for range of prime numbers
read num
i=3
while [ $i -lt $num ]
do
  status=1
  j=0
  for (( $j; $j<=(i/2); j=j+1 ))
  do
    x=`expr $j + 2`
    if [ `expr $i \% $x` -eq 0 ]
     then
      status=0
      break
     fi
  done
  if [ $status -eq 1 ]
  then 
    echo $i
  fi
  i=`expr $i + 1`
done


