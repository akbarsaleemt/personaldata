#include<stdio.h>
static inline int add(int a,int b){
  return a+b;
}
void main(){
 int ret;
 ret=add(10,30);
  printf("sum=%d\n",ret);
}

