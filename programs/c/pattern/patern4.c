#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("enter n value\n");
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=n;j>i+1;j--)
          printf("# ");
        for(;j<n;j++)
          printf(" ");
        printf("\n");
    }
}
