#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    if((n!=0)&&!(n&(n-1)))
      printf("n =%d is power of 2\n",n);
    else
      printf("n=%d is not power of 2\n",n);

}

