#include<stdio.h>
void main(){
  int x,y;
  int a,b;
  int lcm,hcf;
  printf("enter x,y values\n");
  scanf("%d%d",&x,&y);
  a=x;b=y;
  while(b!=0){
    int temp;
    temp=b;
    b=a%b;
    a=temp;
  }
  hcf=a;
  lcm=(x*y)/hcf;
  printf("lcm=%d\nhcf=%d\n",lcm,hcf);
}
