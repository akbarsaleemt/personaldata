#! /bin/bash

a=10
b=20

val=`expr $a + $b`
echo "a + b : $val"
echo enter a, b values
read a
read b

echo sum: `expr $a + $b`
s=`expr $a - $b`
echo s: $s

#mul = $(( a \* b ))
echo mul = $(( a*b ))
 mul=$(( a*b ))
echo mul2 : $mul
 #div =-e $(( a/b ))
echo div  $(( a/b ))
