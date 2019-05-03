#! /bin/bash
echo forloop
for i in {1..100}
do
  echo $i
done
echo whilelopp
i=0
while [ $i -lt 100 ]
do
 if [ `expr $i \% 2` -eq 1 ] 
 then
  echo $i
fi
i=`expr $i + 1`
done












































