#include<stdio.h>
union endian{
  int data;
  char arr[sizeof(int)];
}lbendian;
void main(){
    char a;
    lbendian.data=6;
    printf("data=%d\n",lbendian.data);
    printf("char =%d\n",lbendian.arr[0]);
    printf("char =%c\n",lbendian.arr[0]);
    a=lbendian.arr[0];
    printf("a=%d\n",a);

}
