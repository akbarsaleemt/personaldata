#include<stdio.h>
int funadd(int a, int b){
  return a+b;
}
void main(){
  printf("result=%d\n",--funadd(10,20));
  printf("result=%d\n",funadd(10,20)++);
}
