#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
int x=10;
void *myfunction(void *arg)
{
  int *ptr=(int *)arg;
  *ptr=55;
  printf("the value p1 a=%d\n",*ptr);
  for(int i=0;i<10000000;i++)
    x++;
  sleep(1);
  printf("x1=%d\n",x);
}

void *myfunction1(void *arg)
{
  int *ptr=(int *)arg;
 // *ptr=100; 
  printf("the value  in p2 b=%d\n",*ptr);
  /*for(int i=0;i<10000000;i++)
    x++;*/
  printf("x2=%d\n",x);
}

void main()
{
 volatile int a=10;
  int b=20;
 // int a=10;
  pthread_t  t1,t2;
  pthread_create(&t1,NULL,myfunction,&a);
  pthread_create(&t2,NULL,myfunction1,&a);

  printf("\nthe value in main a=%d\n",a);
  printf("the value main b=%d\n",b);
  pthread_join(t1,NULL);
  // printf("\nthe value a=%d\n",a);
  // printf("the value b=%d\n",b);
  pthread_join(t2,NULL);
  printf("x=%d\n",x);
  printf("\nthe value in main a=%d\n",a);
}
