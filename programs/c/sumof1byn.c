#include<stdio.h>
#include<stdlib.h>
void main()
{ 
  int n;
  while(1)
  {
    float sum=0;
    printf("enter n value\n");
      scanf("%d",&n);
    if(n>0){
      sum=1-(1/2)^n;
      printf("sum=%f\n",sum);
    }   
  } 
}           
