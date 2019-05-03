#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<fcntl.h>
#include<semaphore.h>
pthread_t t1,t2;
void *threadfun(void){
  while(1){
  sem_wait(&sem1);
  printf("1\n");
  sleep(1);
  sem_post(&sem2);
  }
}
void *threadfun2(void){
  while(1){
    sem_wait(&sem2);
    printf("2\n");
    sleep(1);
    sem_post(&sem1);
  }
}


void main()
{
  int ret1,ret2;
 if(sem_init(&sem1,1,1)<0){
   perror("semaphore initialization\n");
   exit(1);
 }
 if(sem_init(&sem2,1,0)<0){
   perror("sem error\n");exit(2);
 }
 ret1=pthread_create(&t1,NULL,threadfun,NULL);
 if(ret1){
   perror("thread error\n");
   exit(2);
 }
 ret2=pthread_create(&t2,NULL,threadfun2,NULL);
 if(ret2){
   perror("thread error\n");
   exit(3);
 }
 ret1=pthread_join(t1,NULL);
 if(ret1){
   perror("join error\n");
   exit(4);
 }
 ret2=pthread_join(t2,NULL);
 if(ret2){
   perror("join error");
   exit(5);
 }
 pthread_exit(0);
}
