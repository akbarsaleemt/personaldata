#include<stdio.h>
#include<stdlib.h>
void main()
{
  char ch;
           printf("enter charecter\n");
            scanf("%c",&ch);
                    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
                    {
                      printf("the entered character is alphabet\n");
                    }
                    else if(ch>='0'&&ch<='9')
                    {
                      printf("the character is numerical value\n");
                    }
                    else
                      printf("the character is special character\n");
                    

}

