#!/bin/bash
IN="bla@some.com;john@home.com" 
set -- "$IN" 
IFS=";"; declare -a Array=($*) 
echo "${Array[@]}" 
echo "${Array[0]}" 
echo "${Array[1]}"

addr=123.123.123.123
set -- "$addr"
IFS="."; declare -a ary=($*)
 echo "length of array is ${#ary[@]}"
 echo "${ary[@]}"
