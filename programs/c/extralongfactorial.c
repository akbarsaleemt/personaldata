#include<stdio.h>
void main(){
    int n,i;
    printf("enter n value\n");
    scanf("%d",&n);
    long long int fact=1;
          for(i=n;i>0;i--){
            fact=fact*i;
          }
          printf("%lld\n",fact);
}

