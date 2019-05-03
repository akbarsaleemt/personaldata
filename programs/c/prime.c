#include<stdio.h>
#include<stdlib.h>
void  prime(int);
void main(){
    int n;
    printf("enter range of numbers\n");
    scanf("%d",&n);
    int i,f,j;
         for(j=3;j<=n;j++){
           prime(j);
         }
}
            
void  prime(int x)
  {
    int i,f=0;
    for(i=2;i<=x/2;i++){
           if(x%i==0){
             f=1;break;
           }
         }
         if(f==0)
          printf("x=%dis prime\n",x);
           
         
  }
