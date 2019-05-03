echo "enter directory"
read dirctry
printfiles()
{
for i in ${dirctry}*.txt
do
  echo "file name is $i and data in file is" >> outputfile.txt
    cat $i >> outputfile.txt
done
}

printfiles



