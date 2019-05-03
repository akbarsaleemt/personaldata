#include<stdio.h>
void main()
{
    const int x=10;
    const volatile int y=100;
    printf("x=%d\ny=%d\n",x,y);
     int *ptr;
     ptr=&y;
     *ptr=989;
    printf("after ptr=%d\ny=%d\n",*ptr,y);
} 
