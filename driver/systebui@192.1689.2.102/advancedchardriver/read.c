#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#define MAX 1024
void main()
{
  int fd,ret;
  char buf[MAX];
  fd=open("/dev/my_dev_file",O_CREAT|O_RDONLY, 0777);
  if(fd<0){
    printf("file open error\n");
    return;
  }
  ret=read(fd,buf,MAX);
  if(ret==0){
    printf("read error\n");
    return;
  }
  printf("data in file is :%s\n",buf);
  close(fd);
}

