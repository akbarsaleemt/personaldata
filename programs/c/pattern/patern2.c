#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++)
          printf("# ");
      printf("\n");
    }
}
