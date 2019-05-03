#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
       #include <sys/stat.h>
       #include <fcntl.h>
void main(){
    int fd;
    char buf[6]={'\0'};
   fd=open("log.txt",O_CREAT|O_WRONLY,0777);
     if(fd<0)
     {
       printf("file open error\n");
       return;
     }
     dup2(fd,1);
     printf("hello world this is vt\n");
     close(fd);
    printf("trhis hjjjjjjjjjjjjfgjksdfgksf\n");
}

     


