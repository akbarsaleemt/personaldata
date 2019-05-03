#include<stdio.h>
#include<stdlib.h>
#define MAX 10
static int maxnumof_array(int *, int );
void main()
    {
      int a[MAX],i;
      printf("enetr data to array\n");
      for(i=0;i<MAX;i++)
      {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
      }

      for(i=0;i<MAX;i++)
      {
        printf("%d ",a[i]);
      }
      printf("\n");
      int maxnum=0;
      maxnum=maxnumof_array(a,MAX);
      printf("maximum number of array is %d\n",maxnum);
    }

  static int maxnumof_array(int *ptr, int size)
      {
       static int i=0,num=0;
        if(i<size){
            if(num<ptr[i])
              num=ptr[i];
          i++;
          maxnumof_array(ptr,size);
          }
        return num;
      }

      


