#include<stdio.h>
#include<stdlib.h>
int sum(int);
void main()
    {
        int n,s;
        printf("enter n value\n");
        scanf("%d",&n);
        s=sum(n);
        printf("s=%d\n",s);
    }
  
  int sum(int a){
    if(a==1)
      return 1;
    else
      return a+sum(a-1);
  }

