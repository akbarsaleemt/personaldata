#include<stdio.h>
int arr[100];
int *oddnum(int l, int r, int *arrcount){
  int num,i=0;
  for(num=l;num<r;num++){
    if(num%2){
      arr[i]=num;
      i++;
    }
  }
  *arrcount=i;
return arr;
}

void main()
{
  int m,n,*ptr;
  printf("enter l,r values\n");
  scanf("%d%d",&m,&n);
  int cont=0;
  ptr=oddnum(m,n,&cont);
  printf("odd numbers in between l=%d and r=%d \n",m,n);
  for(int i=0;i<cont;i++){
    printf("%d\t",ptr[i]);
  }
  printf("\n");

}
