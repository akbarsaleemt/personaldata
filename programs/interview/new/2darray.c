#include<stdio.h>
void main(){
  int m,n;
  printf("enter size of arraym: n:\n");
  scanf("%d%d",&m,&n);
  int a[m][n];
  int i,j;
  printf("enter elements to array\n");
  for(i=0;i<m;i++){
      for(j=0;j<n;j++){
          scanf("%d",&a[i][j]);
      }
  }
  printf("elements of array\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
  printf("data of array in single loop\n");
  j=0;
  for(i=0;i<m;j++)
  {
      if(j==n){
        j=-1;i++;
        printf("\n");
      }
      else
      printf("%d\t",a[i][j]);
  }
}

