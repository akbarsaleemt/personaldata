#include<stdio.h>
int bsearch(int *,int,int,int);
void main()
{
  int arr[]={1,3,4,10,40,50,60};
  int n=sizeof(arr)/sizeof(arr[0]);
  int x=3;
  int res;
  res=bsearch(arr,0,n-1,x);
      printf("The sizeof array is %d \n",n);
  if(res==-1)
      printf("The number %d not found in array\n",x);
  else
      printf("The number %d found at index %d of array\n",x,res);
}

int bsearch(int *ptr, int l, int r,int x)
{
    if(r>=l){
        int mid= l+((r-l)/2);
        if(ptr[mid]==x)
                return mid;
        if(ptr[mid]>x)
            return bsearch(ptr,l,mid-1,x);
        else
            return bsearch(ptr,mid+1,r,x);
    }
    return -1;
}
