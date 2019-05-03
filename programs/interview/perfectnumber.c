/*****************************************************************************************
  What is perfect number?

  A number is considered as perfect number when it satisfies the below conditions.

  It should be a positive number
  When the sum of it's divisors (excluding that number) are equal to that number



  Example for perfect numbers:

  6, 28, 496, 8128

Description:

1 + 2 + 3 = 6

1 + 2 + 4 + 7 + 14 = 28
 ******************************************************************************************/
#include<stdio.h>
void main(){
  int num;
  int i,sum;
  int x=1;
    while(x++<10000000){
        i=1;sum=0;
        num=x;
      //  printf("enter number=%d\n",num);
      //  scanf("%d",&num);
          while(i<num){
            if(num%i==0){
            sum=sum+i;
         //   printf("sum=%d+%d\n",sum,i);
            }
            i++;
          }
          if(sum==num)
            printf("num=%d is perfect number\n",num);
    }
}

