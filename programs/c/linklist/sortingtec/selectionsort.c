#include<stdio.h>
void swap(int *x, int *y)
{
  int temp;
  temp=*x;
  *x=*y;
  *y=temp;
}

void selcsort(int *arr,int n)
{
  int i,j;
  for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
          if(arr[i]>arr[j])
            swap(&arr[i],&arr[j]);
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
    selcsort(a,5);
    printf("after sorting \n");
    for(i=0;i<5;i++)
      printf("%d\t",a[i]);
    printf(" \n");
}

    
