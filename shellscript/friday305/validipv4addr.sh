#!/bin/bash
while read -r line
do
  set -- "$line"
  IFS="."; declare -a arry=($*)
  if [ ${#arry[@]} -eq 4 ]
  then
   # echo "${arry[@]}"
  if [  ${arry[0]} -le 256 ]
    then
      if [ ${arry[1]} -le 256 ]
      then
         if [ ${arry[2]} -le 256 ] 
         then
            if [ ${arry[3]} -le 256 ]
            then
              echo "$line is valid IPV4 address"
            fi
          fi
        fi
     fi
   fi
 done < file.txt




