#include<stdio.h>
#include<math.h>
void prime(int n){
  int i,status=0;
    for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
      status=1;
    }
   }
    if(status==0)
      printf("%d\t",n);
   

}
void main(){
  int num,i;
  printf("enter range ");
  scanf("%d",&num);
  for(i=3;i<=num;i++){
    prime(i);
    
  }
  printf("\n");
}
