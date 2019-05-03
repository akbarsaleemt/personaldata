#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int x;
pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
void *thread1(){
  pthread_mutex_lock(&mtx);
  for(int i=0;i<100000;i++)
    x++;
  printf("int hread1\nx=%d\n",x);
  pthread_mutex_unlock(&mtx);
}

void *thread2(){
  pthread_mutex_lock(&mtx);
  for(int i=0;i<100000;i++)
    x++;
  printf("in thread2\nx=%d\n",x);
  pthread_mutex_unlock(&mtx);
}

void main()
{
  int ret;
  pthread_t t1,t2;
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
  printf("in main after threads x=%d\n",x);
}




