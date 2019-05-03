#include<stdio.h>
void main(){
  int x=9;
  int count=0;
  int num=x,i=10;
  while(i>0){
    printf("enter number\n");
    scanf("%d",&x);
    num=x;
    count=0;
  while(num){
    if(num%2)
      count++;
    else
      count=count;
    num=num/2;
  }
  i--;
  printf("noof 1's in given number=%d is %d\n",x,count);
  }
}

