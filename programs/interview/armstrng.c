#include<stdio.h>
void main(){
  int num=0;
  int i=10;
  int rem=0;
  int cpynum=0;
  while(i--){
      int sum=0;
      printf("enter number\n");
      scanf("%d",&num);
      cpynum=num;
      while(num){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
      }
      if(sum==cpynum)
        printf("num=%d is armstrong number\n",cpynum);
      else
        printf("num=%d is not armstrong number and sum=%d\n",cpynum,sum);

  }
}
