#include<stdio.h>
void main()
{
    int const x=10;
    const volatile int y=100;
    printf("x=%d\ny=%d\n",x,y);
     int *ptr;
     ptr=&x;
     *ptr=989;
    printf("after ptr=%d\nx=%d\n",*ptr,x);
} 
