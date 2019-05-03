#include<stdio.h>
#include<stdlib.h>
void main(){
  int **ptr;
  int i,j,c,r;
  c=2;r=2;
  ptr=(int **)malloc(sizeof(int *)*r);
  for(i=0;i<r;i++){
      ptr[i]=(int *)malloc(sizeof(int)*c);
      }
  printf("enter data\n");
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      scanf("%d",&ptr[i][j]);
    }
  }
  for(i=0;i<r;i++){
    for(j=0;j<c;j++){
      printf("%d",ptr[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<r;i++){
      free(ptr[i]);
  }
  free(ptr);
}



