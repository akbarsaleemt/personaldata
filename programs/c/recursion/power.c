#include<stdio.h>
#include<stdlib.h>
long int power(int ,int);
void main()
{
    int n,p;
    long int res;
    printf("enter n , p value\n");
    scanf("%d%d",&n,&p);
    res=power(n,p);
    printf("n=%dpower of p=%d is %ld\n",n,p,res);
}
  long int power(int x,int y)
  {
      int res=1;
      if(y==0)
        return res;
      res=x*power(x,y-1);
  }
