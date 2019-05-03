#include<stdio.h>
int x=9;
void main(){
#if x
  printf("hello world\n");
# else
  printf("hello world 2\n");
#endif
}

