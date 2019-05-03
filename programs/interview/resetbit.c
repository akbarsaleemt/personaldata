#include<stdio.h>
void main(){
  int num;
  int mask1=0x01;
  int mask2=0x08000;
  int mask3=0x0800000;
  int mask4=0x080000000;
  int n,a,b,c,d,i=10;
  while(i--){
//  a=0;b=0;c=0;d=0;
  printf(" enter number");
  scanf("%x",&num);
  printf(" number=%x\n",num);
  for(n=1;n<9;n++){
    printf("n=%d\n",n);
    printf("mask1=%x\n",mask1);
    printf("mask2=%x\n",mask2);
    printf("mask3=%x\n",mask3);
    printf("mask4=%x\n",mask4);
      if(num&mask1==mask1){
       a=0x01;
      printf("%x&%x=%x\n",num,mask1,num&mask1);  

        break;
      }
      if(num&mask2==mask2){
       b=0x01;
      printf("%x&%x=%x\n",num,mask2,num&mask2);  
       
      }
      if(num&mask3==mask3){
        c=0x01;
      printf("%x&%x=%x\n",num,mask3,num&mask3);  
         }
      if(num&mask4==mask4){
        d=0x01;
      printf("%x&%x=%x\n",num,mask4,num&mask4);  
       
      }
      mask1=mask1<<1;
      mask2=mask2>>1;
     mask3=mask3>>1;
      mask4=mask4>>1;
    if(b==0x01)
      mask2=mask2<<1;
    if(c==0x01)
      mask3=mask3<<1;
    if(d==0x01)
      mask4=mask4<<1;
  }
  printf("a=%x\nb=%x\nc=%x\nd=%x\n",mask1,mask2,mask3,mask4);
  if(a==0x00){
      if(b==0x00){
          if(c==0x00){
          if(d==0x00){
            printf("all are zeros\n");
          }
          else{
            num=num^mask4;
          }
      }
      else{
        num=num^mask3;
      }
  }
      else{
        num=num^mask2;
      }
  }
  else{
    num=num^mask1;
  }
  printf("after reset num=%x\n",num);
  }
}


