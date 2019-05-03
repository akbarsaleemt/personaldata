#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<pthread.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
sem_t sem;
void main()
{
    int fd;
    fd=open("hello.txt",O_RDONLY);
    if(fd<0){
        printf("file open error\n");
        return;
    }
    char buf[10000];
    printf("print data  from\n");
    sem_open(&sem,1,0);
    sem_wait(&sem);
    read(fd,buf,10000);
   // sem_post(&sem);
    sem_close(&sem);
    printf("data in buf=%s\n",buf);
    printf("after read before closing\n");
    close(fd);
}
