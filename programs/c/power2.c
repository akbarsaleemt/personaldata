#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
         while(1)
         {
           printf("n value to get 2 power of n\n");
           scanf("%d",&n);
           int pow=1;
                if(n>0)
                {
                     for(int i=1;i<=n;i++)
                      {
                        pow=pow*2;
                      }
                     printf("2 power of %d is %d\n",n,pow);
                }
                else if(n==0)
                  printf("2 power of %d is %d\n",n,pow);
                else
                  printf("invalid to claculate 2 power of %d\n",n);
         }
}

