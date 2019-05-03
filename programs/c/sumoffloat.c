#include<stdio.h>
#include<stdlib.h>
#include<math.h>
  int main(){
    int a,b,add,sub;
    float c,d,addf,subf;
    printf("enter  two numbers decimals and two float\n");
    scanf("%d%d",&a,&b);
    scanf("%f%f",&c,&d);
    add=a+b;
    if(a>b)
      sub=a-b;
    else
      sub=b-a;
    printf("%d\t%d\n",add,sub);
    addf=c+d;
    double round(double addf);
    if(c>d)
      subf=c-b;
    else
      subf=b-c;
    double round(double subf);
    printf("%.1f\t%.1f\n",addf,subf);
  }
