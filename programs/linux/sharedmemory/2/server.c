#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/sem.h>
#include <string.h>
#define KEY 19920

void toggle(char* ,int);
void main()
{
  struct sembuf sem_op;
  char *shm;
  int shmid,semid,cnt;
  semid=semget(KEY,2,0640|IPC_CREAT);
  semctl(semid,0,SETVAL,0);
  semctl(semid,1,SETVAL,0);
  shmid=shmget(KEY,512,0640|IPC_CREAT);
  shm=shmat(shmid,0,0);
  printf("\n pid %d\n",getpid());
      while(1)
       {
          sem_op.sem_num=0;
          sem_op.sem_op=-1;
          sem_op.sem_flg=0;
       semop(semid,&sem_op,1);
       cnt=printf("%s\n",shm);
       strcpy(shm+256,shm);
       toggle(shm+256,cnt);
          sem_op.sem_num=1;
          sem_op.sem_op=1;
          sem_op.sem_flg=0;
       semop(semid,&sem_op,1);
    }
}
void toggle(char *ptr,int cnt)
{
  int ii;
  char *buf;
  buf=ptr;
  for(ii=0;ii<cnt;ii++)
  {
    if((buf[ii] >= 'A') && (buf[ii] <= 'Z'))
      buf[ii] += 0x20;
    else if((buf[ii] >= 'a') && (buf[ii] <= 'z'))
      buf[ii] -= 0x20;
  }
}

