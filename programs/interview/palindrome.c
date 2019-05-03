#include<stdio.h>
void main(){
  int num=0;
  int i=10;
  int rem=0;
  int cpynum=0;
  while(i--){
      int sum=0,base=10;
      printf("enter number\n");
      scanf("%d",&num);
      cpynum=num;
      while(num){
        rem=num%10;
        sum=rem+sum*base;
        num=num/10;
      }
      if(sum==cpynum)
        printf("num=%d is palindrome\n",cpynum);
      else
        printf("num=%d is not palindrome  number and reversed number is =%d\n",cpynum,sum);

  }
}
