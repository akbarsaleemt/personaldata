echo "enter directory"
read dirctry
<< COMENT
printfiles()
{
for i in ${dirctry}*.*
do
  echo "file name is $i and data in file is" >> outputfile.txt
    cat $i >> outputfile.txt 
done
}
COMENT
printfiles()
{
  di=$1
  
  for file in ${di}*
  do
  if [ -d "$file" ] 
  then
    echo " $file is a directory"
    printfiles $file/
  else
    echo "$file is a file"
 
 fi
 done
 }

printfiles $dirctry



