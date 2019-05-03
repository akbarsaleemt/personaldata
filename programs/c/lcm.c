#include<stdio.h>
#include<stdlib.h>
void main()
    {
      int n1,n2,lcm,gcd;
          while(1)
          {
            printf("enter two numbers\n");
            scanf("%d%d",&n1,&n2);
           // lcm=(n1>n2)?n1:n2;
               for(lcm=2;lcm<=n1;lcm++){
                     if(n1%lcm==0&&n2%lcm==0){
                        gcd=lcm;     
                      // break;
                       }
                 }
              lcm=(n1*n2)/gcd;
              printf("gcd=%d\n",gcd);           
              printf("lcm=%d\n",lcm);
          }
    }
