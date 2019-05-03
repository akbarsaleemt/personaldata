#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<stdlib.h>
int x;
sem_t sem1;
void *thread1(){
  sem_wait(&sem1);
  for(int i=0;i<100000;i++)
    x++;
  printf("int hread1\nx=%d\n",x);
  sem_post(&sem1);
}

void *thread2(){
  sem_wait(&sem1);
  for(int i=0;i<100000;i++)
    x++;
  printf("in thread2\nx=%d\n",x);
  sem_post(&sem1);
}

void main()
{
  int ret;
  pthread_t t1,t2;
  sem_init(&sem1,0,1);
//  sem_init(sem2,NULL,0);
  printf("in main before threads x=%d\n",x);
  ret=pthread_create(&t1,NULL,thread1,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  ret=pthread_create(&t2,NULL,thread2,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  ret=pthread_join(t1,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  ret=pthread_join(t2,NULL);
  if(ret){
    printf("thread error\n");
    return;
  }
  sem_close(&sem1);
  printf("in main after threads x=%d\n",x);
}




