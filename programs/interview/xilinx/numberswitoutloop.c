#include<stdio.h>
void main(){
  int i=0;
start:if(i<=100){
        printf("%d ",i++);
        goto start;
      }
      printf("\n");
}
