#include<stdio.h>
#include<stdlib.h>
void main()
{
  int***ptr;
  int r,c;
  r=4,c=4,n=3;
  ptr=(int***)malloc(r*sizeof(int**));
  if(ptr==NULL){
    printf("error\n");
  }
  for(int i=0;i<r;i++){
    ptr[i]=(int**)malloc(c*sizeof(int*));
    if(ptr[i]==NULL){
      printf("error\n");
    }
    for(int j=o;j<c;j++)
      ptr[i][j]=(int *)malloc(n*sizeof(int));
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++)
      free(ptr[i][j]);
    free(ptr[i]);
  }
  free(ptr);
}
  
