#include<stdio.h>

void main()
    {
      int m,i,j;
      printf("enter n value\n");
      scanf("%d",&m);
      int n[m];
      n[0]=0;
      for(i=1;i<m+1;i++)
        n[i]=-1;
      for(i=1;i<=m;i++){
          if(n[i]==-1||n[i]>n[i-1]+1)
            n[i]=n[i-1]+1;
          for(j=1;j<=i&&i*j<=m;j++)
          {
              if(n[i*j]==-1||n[i*j]>n[i]+1)
                n[i*j]=n[i]+1;
          }
      }
      i--;
      printf("count=%d\n",n[i]);
    }

