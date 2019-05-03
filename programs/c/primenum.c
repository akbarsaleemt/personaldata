#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n,i, flag;
        while(1)
        {
          printf("enter num\n");
          scanf("%d",&n);
              if(n>0)
              {
                flag=1;
                   for(i=2;i<=sqrt(n);i++)
                     {
                       if(n%i==0)
                         flag=0;
                     }
                   if(flag)
                   printf("n=%d is prime number\n",n);
                   
              }
        }
}

