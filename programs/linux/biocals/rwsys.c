#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void main(){
    int fd;
    char buf[100];
    fd=open("hello.txt",O_CREAT|O_WRONLY,0777);
     if(fd<0)
     {
       printf("file open error\n");
       return;
     }
     printf("enter data to buffer\n");
     fgets(buf,100,stdin);
     int ret=write(fd,buf,strlen(buf));
     printf("no of bytes writen to file is %d\n",ret);
     close(fd);
      char buf2[100];
    fd=open("hello.txt",O_RDONLY,0777);
     if(fd<0)
     {
       printf("file open error\n");
       return;
     }
     ret=read(fd,buf2,100);
     printf("no of bytes read from file is %d\n",ret);
     printf("data read from file is %s\n",buf2);
    close(fd);
}

