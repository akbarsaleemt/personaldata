#include<stdio.h>
extern int n;
void fun()
{
  printf("n=%d\n",n);
  n=8;
}
