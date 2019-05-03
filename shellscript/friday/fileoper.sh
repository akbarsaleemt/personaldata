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
echo while loop for data to second file from first file
while read line
do 
  echo $line >> newfile.txt
done <$file
echo while loop for data to second file from first file
while read line
do 
  echo $line | grep "file" >> newfile2.txt
done < newfile.txt

