#include<stdio.h>
#include<stdlib.h>
int fun1(int);
int fun2(int);
void main(){
    int n,res;
    printf("enter n value\n");
    scanf("%d",&n);
    res=fun1(n);
    printf("res=%d\n",res);
}

  int fun1(int x){
      return fun2(x)*5;
  }
  int fun2(int x){
      return x*5;
  }

