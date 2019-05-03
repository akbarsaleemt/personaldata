#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/sem.h>
#define KEY 19920

void main()
{
struct sembuf sem_op;
char *shm;
int shmid,semid;
semid=semget(KEY,2,0);
shmid=shmget(KEY,512,0);
shm=shmat(shmid,NULL,0);
while(1)
{
printf("\n enter string\n");
scanf("%s",shm);
sem_op.sem_num=0;
sem_op.sem_op=+1;
sem_op.sem_flg=0;
semop(semid,&sem_op,1);
sem_op.sem_num=1;
sem_op.sem_op=-1;
sem_op.sem_flg=0;
semop(semid,&sem_op,1);
printf("%s\n",shm+256);
}
}
