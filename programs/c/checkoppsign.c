#include<stdio.h>
#include<stdlib.h>
void main()
    {
      int a=0,b=0;
      printf("enter a ,b values\n");
      scanf("%d%d",&a,&b);
      if((a^b)<0)
          printf("a and b are have different signs\n");
      else
          printf("a and b have same sign\n");
    }

