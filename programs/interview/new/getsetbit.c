#include<stdio.h>
void main(){
  int num,i,j;
  int mask=0x01;
  printf("enter a number\n");
  scanf("%x",&num);
  for(j=31;j>=0;j--){
    if(num&mask<<j){
      printf("the number higest msb bit set positionis %d\n",j+1);
      break;
    }
  }
  for(i=0;i<32;i++){
    if(num&mask<<i){
      printf("the number higest lsb bit set positionis %d\n",i+1);
      break;
    }
  }
}
