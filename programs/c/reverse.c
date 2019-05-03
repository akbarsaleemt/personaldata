#include<stdio.h>
#include<string.h>
void main()
{
  int i;
  char buf[10]="hello",b[10];
  printf("enter string'\n");
  scanf("%s",b);
  i=strlen(b);
  for(int j=0;j<i;j++)
  {
    if((b[j]-buf[j]==0)||(buf[j]-b[j]==32))
      continue;
    else{
      printf("strings are not equal\n");
      break;
    }
  }
  printf("reversed data \n");
    while(i>=0){
      printf("%c",b[i]);
      i--;
  }
}
