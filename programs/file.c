#include<stdio.h>
extern int n=4;
void fun(void);
void main()
{
  printf("hain=%d\n",n);
  n=10;
  fun();
  printf("hain=%d\n",n);
}
