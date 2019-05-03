#include<stdio.h>
void main(){
  int year;
  int i=10;
  while(i--){
    printf("enter year\n");
    scanf("%d",&year);
    if(year%400==0)
      printf("year=%d is leap year\n",year);
    else if(year%100==0)
      printf("year=%d is not leap year\n",year);
    else if(year%4==0)
      printf("year=%d is leap year\n",year);
    else  
    printf("year=%d is not leap year\n",year);


  }
}
