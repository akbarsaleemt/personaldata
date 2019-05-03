#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int x;
void *thread1(){
  for(int i=0;i<100000;i++)
    x++;
  printf("int hread1\nx=%d\n",x);
}

void *thread2(){
  for(int i=0;i<100000;i++)
    x++;
  printf("in thread2\nx=%d\n",x);
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




