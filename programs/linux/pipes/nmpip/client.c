#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
void main(){
    int fd;
     fd=open("filefifo",O_RDONLY);
     if(fd<0){
       printf("file open error\n");
     }
     char buf[100];
     int ret=read(fd,buf,100);
      if(ret){
        printf("write error\n");
      }
      printf("data in file is:%s\n",buf);
      fclose(fd);
}


