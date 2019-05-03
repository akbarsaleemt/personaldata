#include<stdio.h>
void main(){
  int first=0,second=1,nextterm,i;
  for(i=0;i<100;i++){
    if(i<=1)
        nextterm=i;
    else{
      nextterm=first+second;
      first=second;
      second=nextterm;
    }
    printf("nextterm=%d\n",nextterm);
  }
}
