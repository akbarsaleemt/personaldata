#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
void main(){
    int fd,fd1;
    char buf[6]={'\0'};
    fd=open("log.txt",O_CREAT|O_WRONLY,0777);
       if(fd<0)
        {
          printf("file open error\n");
          return;
        }
   //fd=1;
   fd1=open("llll.txt",O_CREAT|O_WRONLY,0777);
      if(fd1<0)
         {
         printf("file open error\n");
        }
     dup2(fd,fd1);
     write(fd1,"hello world this is vt",22);
     //close(fd);
    //printf("trhis hjjjjjjjjjjjjfgjksdfgksf\n");
}

     


