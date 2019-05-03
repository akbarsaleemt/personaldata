#include<stdio.h>
void print(int *a,int m){
    printf(" \n");
    for(int i=0;i<m;i++)
      printf("%d\t",a[i]);
}
void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void bblesort(int *arr,int n)
{
  int i,j;
  for(i=0;i<n-1;i++){
      for(j=0;j<n-1-i;j++){
          if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
          print(arr,n);
    printf(" \n");
      }
  }
}
void main()
{
    int a[5]={1,4,3,7,5};
    int i;
    printf("display elements of array\n");
    for(i=0;i<5;i++)
      printf("%d\t",a[i]);
    printf(" \n");
    bblesort(a,5);
    printf("after sorting \n");
    for(i=0;i<5;i++)
      printf("%d\t",a[i]);
    printf(" \n");
}

    
