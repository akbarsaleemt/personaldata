#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<signal.h>
#include<stdlib.h>
sem_t sem1,sem2;
int x,count,td1,td2;
void handler(int sig){
  x=1;
  sem_close(&sem1);
  sem_close(&sem2);
  printf("signal handler invoked\n");
}
void *thread1(){
  printf("thread1\n");
  td1=1;
  while(1){
    count++;
  if(x==1){
    sem_close(&sem2);
  printf("semaphore closed\n");
  break;
  }
  sem_wait(&sem1);
  printf("one\n");
  sem_post(&sem2);
  }
}

void *thread2(){
  printf("thread2\n");
  td2=1;
  while(1){
  if(x==1){
    sem_close(&sem1);
  printf("semaphore closed\n");
  break;
  }
  sem_wait(&sem2);
  printf("two\n");
  sem_post(&sem1);
  }
}

void main()
{
  int ret;
  pthread_t t1,t2;
  sem_init(&sem1,0,0);
  sem_init(&sem2,0,0);
  signal(SIGINT,handler);
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
  while(td1==1&&td2==1);
  printf("in main unblock sem1 to td1\n");
getchar();
  sem_post(&sem1);
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
 // sem_close(&sem1);
 // sem_close(&sem2);
  printf("in main after threads count=%d\n",count);
}




