#! /bin/sh
directory=/home/takkaakb/akbar/
for i in ${directory}*.*
do
  echo $i >> listoffiles.txt
done
