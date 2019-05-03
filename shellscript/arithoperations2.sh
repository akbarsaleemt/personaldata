#! /bin/bash
echo enter values for arithmatic operations
read a
read b
echo a=$a b=$b
echo sum of a+b is:
echo `expr $a + $b`
echo difference of a, b is :
 if [ $a -gt $b ]
 then
   echo `expr $a - $b`
 else
   echo `expr $b - $a`
 fi
echo multiplication of a, b is
echo `expr $a \* $b`
echo division of a, b is
echo `expr $a \/ $b`
echo modulo division of a, b is
echo `expr $a \% $b`

