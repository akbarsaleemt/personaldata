#include<stdio.h>
void main(){
  int i,j;

  for(i=0;i<100;i++){
      for(j=0;j<10;j++)
          printf("hello\t");
  }
  printf("\nnew loop\n");
  for(i=0;i<10;i++){
      for(j=0;j<100;j++)
          printf("hello\t");
  }
  printf("\nend of new loop\n");
}
  
