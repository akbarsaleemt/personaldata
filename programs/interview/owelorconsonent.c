#include<stdio.h>
void main(){
  char ch;
  int status=0;
  int i=26;
  while(i--){
    __fpurge(stdin);
    printf("enter a charecter\n");
    scanf("%c",&ch);
    if('A'<=ch<='Z'||'a'<=ch<='z'){
      if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||
           ch=='i'||ch=='I'||ch=='o'||ch=='O'||
           ch=='u'||ch=='U')
        printf("ch=%c is vowel\n",ch);
      else
        printf("ch=%c is consonent\n",ch);
    }
    else{
      printf("entered charecter=%c is not Alphabit\n",ch);
    }
  }
}

