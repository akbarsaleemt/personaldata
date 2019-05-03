#include<stdio.h>
#include<stdlib.h>
void main()
{
  int *ptr;
  {
    int n;
    ptr=&n;
    printf("ptr %p is in if loop=%d\n",ptr,*ptr);
  }
  printf("ptr is %p after loop=%d\n",ptr,*ptr);
}


