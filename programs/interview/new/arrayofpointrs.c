#include<stdio.h>
void main(){
    int *ptr[3],*p;
    int a[3]={1,2,3};
    ptr[0]=&a[0];
    ptr[1]=&a[1];
    ptr[2]=&a[2];
    p=a;
      printf("ptr=%d\n",*ptr[0]);
    for(int i=0;i<3;i++){
      printf("ptr[%d]=%d\n",i,*ptr[i]);
      printf("p[%d]=%d\n",i,p[i]);
    }
}

