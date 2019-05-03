#include<stdio.h>
#include<stdlib.h>
void main(){
    int *ptr;
      ptr=(int *)malloc(10*sizeof(int));
      for(int i=0;i<5;i++)
        ptr[i]=i+2;
      
      ptr=(int *)realloc(ptr,5*sizeof(int));
      for(int i=0;i<10;i++)\
        printf("ptr[%d]=%d\n",i,ptr[i]);
      free(ptr);
      for(int i=0;i<10;i++)\
        printf("ptr[%d]=%d\n",i,ptr[i]);
}

