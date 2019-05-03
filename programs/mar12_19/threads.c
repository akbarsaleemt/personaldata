#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *threadfun()
{
  int x=1;
  printf("thraed =%s\n",__func__);
  printf("x=%d\n",x);
}
void main()
  {
      pthread_t t1;
      int ret;
      ret=pthread_create(&t1,NULL,threadfun,NULL);
        if(ret){
          printf("thread error\n");
          return;
        }
       ret=pthread_join(t1,NULL);
  }



