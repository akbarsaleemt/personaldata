#include<stdio.h>
extern int x;
int sum(int a, int b){
  printf("x=%d\n",x);
  return a+b;
}
