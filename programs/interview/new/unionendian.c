#include<stdio.h>
union basic{
  char i;
  int n;
  char m[4];
}s;
void main(){
  printf("sizeof union is %ld\n",sizeof(s));
    s.n=0x76876543;
    printf("little\n");
    printf("s.n=%x\n",s.n);
    for(int j=sizeof(s.n)-1,i=0;i<j;i++,j--){
      s.m[i]+=s.m[j];
      s.m[j]=s.m[i]-s.m[j];
      s.m[i]=s.m[i]-s.m[j];
    }
    printf("big\n");
      printf("%x\n",s.n);
}  


