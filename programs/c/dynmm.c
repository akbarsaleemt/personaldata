#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr;
    ptr=(int *)malloc(5*sizeof(int));
    printf("sizof ptr=%d\n",sizeof(ptr));
    free(ptr);
}
