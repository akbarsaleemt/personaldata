#include<stdio.h>
#include<unistd.h>
void main(){
  static int c=0;
 // printf("hello:%d\n",c++);
  fork();
  fork();
  fork();
  printf("hello:%d\n",c++);
}
