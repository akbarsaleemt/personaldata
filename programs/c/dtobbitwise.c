#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n;
    while(1){
    printf("enter a number \n");
    scanf("%d",&n);
    int i;
        for(i=15;i>=0;i--)
        {
            if((1<<i)&n)
              printf("1");
            else
              printf("0");
        }
        printf("\n");
    }
}
