#include<stdio.h>
#include <time.h>
void main()
{
  int i,n;
  n=1000000;
  clock_t s,e;
  double total_time;
  s=clock();
  for(i=0;i<n;i++);
  e=clock();
  total_time=((double)(e-s))/CLOCKS_PER_SEC;
  printf("t1=%f\n",total_time);
  s=clock();
  for(i=n-1;i>=0;i--);
  e=clock();
  total_time=((double)(e-s))/CLOCKS_PER_SEC;
  printf("t2=%f\n",total_time);
  s=clock();
  for(i=n-1;i>=0;--i);
  e=clock();
  total_time=((double)(e-s))/CLOCKS_PER_SEC;
  printf("t3=%f\n",total_time);
  s=clock();
  for(i=0;i<n;++i);
  e=clock();
  total_time=((double)(e-s))/CLOCKS_PER_SEC;
  printf("t4=%f\n",total_time);
}

