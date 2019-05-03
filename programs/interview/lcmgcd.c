#include<stdio.h>
void main(){
  int num1,num2,lcm,hcf;
  printf("enter 2 numbers\n");
  scanf("%d%d\n",&num1,&num2);
  for(lcm=2;lcm<=num1;lcm++){
    if(num1%lcm==0&&num2%lcm==0)
      hcf=lcm;
  }
  hcf=(num1*num2)/lcm;
  printf("lcm=%d\nhcf=%d\n",lcm,hcf);
}
