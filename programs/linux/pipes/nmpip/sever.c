#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
void main(){
    int fd;
    if(!mkfifo("filefifo",0666)){
      printf("no fifo");
    }
     fd=open("filefifo",O_WRONLY);
     if(fd<0){
       printf("file open error\n");
     }
     char buf[100];
     printf("enter string:");
     fgets(buf,100,stdin);
     int ret=write(fd,buf,strlen(buf));
      if(ret){
        printf("write error\n");
      }
      fclose(fd);
}


