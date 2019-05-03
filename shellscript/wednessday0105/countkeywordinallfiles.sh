#! /bin/sh
directory=/home/takkaakb/akbar/
count=0;
for i in ${directory}*.*
do
  echo $i >> listoffiles.txt
  echo file name is $i 
  count=$( cat $i | grep -c "int") 
   echo count is $count
done
