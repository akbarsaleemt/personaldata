#include<stdio.h>
void main(){
  int num=0x0ff;
  int mask=0x01;
  int n=3,i=10;
  while(i--){
  printf("enter numand n value\n");
  scanf("%x%x",&num,&n);
  printf("num=%x\n",num);
 // if(num&mask<<n)
    num=num^mask<<n;
 // else
  //  num=num|mask<<n;
  printf("num=%x\n",num);
  }
}

