#include<stdio.h>
#include<stdlib.h>
void main(){
    int i,num;
    printf("display random numbers in between 1 to 100000\n");
    for(i=0;i<10;i++){
      num=rand()%100000+1;
      printf("%d\n",num);
    }
}

