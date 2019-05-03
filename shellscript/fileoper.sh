echo enter filename
read file
echo $file
echo hello world>$file
cat $file
echo sdafkjasdflasdfhjsdfsklf >$file
cat $file
echo apending dtat to file >>$file
#cat $file
echo while loop for data printing
while read line
do 
  echo $line
done <$file

