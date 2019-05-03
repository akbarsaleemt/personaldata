#include<stdio.h>
#include<stdlib.h>
void display(int);
void main()
  {
    int n;
    printf("enter range of numbers\n");
    scanf("%d",&n);
    display(n);
  }
void display(int x){
    static int i=0;
    if(i>x){
      printf("\n");
      return;
    }
    printf("%d ",i);
    i++;
    display(x);
}
