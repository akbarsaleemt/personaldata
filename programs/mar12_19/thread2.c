#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *threadfun1()
{
  int x=1;
  printf("thraed =%s\n",__func__);
  printf("x=%d\n",x);
}
void *threadfun2(void *x)
{
  char *ptr=(char *)x;
  printf("ptr=%s\n",ptr);
  printf("x=%s\n",(char *)x);
}

void main()
  {
      pthread_t t1,t2;
      int ret;
      ret=pthread_create(&t1,NULL,threadfun1,NULL);
        if(ret){
          printf("thread error\n");
          return;
        }
      ret=pthread_create(&t2,NULL,threadfun2,"hello_world");
        if(ret){
          printf("thread error\n");
          return;
        }
       ret=pthread_join(t1,NULL);
       ret=pthread_join(t2,NULL);
  }



