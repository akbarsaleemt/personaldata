#! /bin/bash
host=takkaakb@192.168.4.152
if ssh $host ls > a2.txt
then
 if ssh $host test -f 'nullptr.c'  
 then
 echo file exist
 if ssh $host find / -name 'nullptr.c' > a.txt
 then
 echo complete2
 fi
 
echo "file path is"
PTH=$( cat a.txt)
echo $PTH
if ssh $host test -w 'nullptr.c' 
then
	echo "file has write permission"
	scp $PTH takkaakb@192.168.4.152:~/akbar/shellscript/tuesday3004/
	grep "oops" nullptr.c > newfile.c
	sed -i -e 's/oops/error/g'  newfile.c
	echo " data in new file is"
	cat newfile.c
	
else
	echo " file has no write permission"
fi
else
   echo file not exist
 fi
 echo total completed
fi
