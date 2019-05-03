#include<stdio.h>
#include<stdlib.h>
int sumdig(int);
void main()
    {
      int n,res;
      printf("enter n value\n");
      scanf("%d",&n);
      res=sumdig(n);
      printf("res=%d\n",res);
    }
 
  int sumdig(int x){
   static int r=0;
     
       if(x>0){
        r=r+(x%10);
        sumdig(x/10);
      }
       else
        return r;
  }
