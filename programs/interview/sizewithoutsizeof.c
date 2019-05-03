#include<stdio.h>
void main(){
  int *ptr=0;
  ptr++;
  printf("ptr=%d\n",ptr);
  char *cptr=NULL;
  cptr++;
  printf("cptr=%d\n",cptr);
}
