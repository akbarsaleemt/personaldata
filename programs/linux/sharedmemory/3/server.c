#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/sem.h>
#include <string.h>
#define KEY 19920

void main()
{
  struct sembuf sem_op;
  char *shm;
  int shmid,semid,cnt;
  semid=semget(KEY,2,0640|IPC_CREAT);
  semctl(semid,0,SETVAL,0);
  shmid=shmget(KEY,512,0640|IPC_CREAT);
  shm=shmat(shmid,0,0);
  printf("\n pid %d\n",getpid());
      while(1)
       {
         printf("waiting for data\n"); 
          sem_op.sem_num=0;
          sem_op.sem_op=-1;
          sem_op.sem_flg=0;
       semop(semid,&sem_op,1);
       cnt=printf("%s\n",shm);
    }
}

