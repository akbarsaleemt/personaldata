/***************************************************
Definition for a Strong number:

When the sum of the factorial of a number's 
individual digits are equal to the number itself,
then that number is called a strong number.

Example: 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145
***************************************************/
#include<stdio.h>
int factorial(int num){
  int fact=1;
    for( int i=1;i<=num;i++)
       fact=fact*i;
  return fact;
}
void main(){
  int n;
  int rem;
  int i=1;
  printf("enter a range of numbers from 1 to n");
  scanf("%d",&n);
  if(n==0){
    printf("entered number is 0\n");

  }
  else{
    while(i<n){
        int sum=0;
        int num=i;
        while(num){
          rem=num%10;
          sum=sum+factorial(rem);
          num=num/10;
         }
      if(sum==i)
        printf("num=%d is strong number\n",sum);
      i++;
    }
  }
}
        



