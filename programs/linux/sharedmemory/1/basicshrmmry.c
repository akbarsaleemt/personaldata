#include<stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include<unistd.h>
#include<sys/types.h>
#define KEY 1
void main()
{
    int shmid;
    shmid=shmget(KEY,1024, IPC_CREAT|0777);
    char *shm;
    shm=shmat(shmid,0,0);
    printf("enter data to buffer\n");
    fgets(shm,1024,stdin);
}
