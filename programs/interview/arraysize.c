#include<stdio.h>
void main()
{
  int arr[]={1,2,3,4,5,6,7,8,9};
  int len;
  len=sizeof(arr)/sizeof(int);
  printf("sizeof array is %d\n",len);
}
