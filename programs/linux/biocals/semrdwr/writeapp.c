#include<stdio.h>
#include<stdlib.h>
#include<semaphore.h>
#include<pthread.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
sem_t sem;
void main()
{
    int fd;
    fd=open("hello.txt",O_CREAT|O_WRONLY,0777);
    if(fd<0){
        printf("file open error\n");
        return;
    }
    char buf[10000];
    printf("enter data to buf\n");
    scanf("%[^/]s",buf);
    write(fd,buf,10000);
    sem_post(&sem);sem_close(&sem);
    printf("after write before closing\n");
    close(fd);
}
