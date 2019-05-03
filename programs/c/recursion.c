#include<stdio.h>
int recursive(int);
void main(){
  int n=recursive(32);
  printf("result %d\n",n);
}
int recursive(int x){
  if(x>1)
   return x*recursive(x-1);
  return x;
}

