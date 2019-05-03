#!/bin/bash
while read line
do
  echo $line
    set -- "$line"
    IFS=" "; declare -a arr=($*)
    sum=`expr ${arr[1]} + ${arr[2]} + ${arr[3]}`
    avg=`expr $sum / 3`
    echo "${arr[0]} avg is $avg"
    if [ $avg -ge 80 ]
    then
      echo "GRADE A"
    else
      if [ $avg -ge 60 ]
      then
        echo "GRADE B"
      else
        if [ $avg -ge 50 ]
        then
          echo "GRADE C"
        else
          echo "FAIL"
        fi
      fi
    fi
done<file.txt


