#include <sys/ipc.h>
#include <sys/shm.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#define KEY 1
void main()
{
    int shmid;
    shmid=shmget(KEY,0,0);
    char *shm;
    shm=shmat(shmid,NULL,0);
    printf(" data in buffer %s\n",shm);
   
}
