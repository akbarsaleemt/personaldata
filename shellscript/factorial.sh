echo enter input number to find factorial
read a
fact=1
for (( i=a; i>0; i=i-1 ))
do
  fact=`expr $fact \* $i`
done
echo $fact

