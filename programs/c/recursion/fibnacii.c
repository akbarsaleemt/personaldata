#include<stdio.h>
#include<stdlib.h>
void fibnaci(int );
void main()
    {
      int n;
      printf("range n\n");
      scanf("%d",&n);
      fibnaci(n);
      printf("\n");
    }

  void fibnaci(int x){
  static int i=0,nxt=1,sum=0;    
    if(x<0)
          return;
   
    printf("%d ",i);
    sum=nxt+i;
    i=nxt;
    nxt=sum;
    x--;
    fibnaci(x);
  }
