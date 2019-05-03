#! /bin/python3
def prime(x):
   j=2
   while j<=(x/2):
       if x%j ==0 :
           return 0
       j=j+1
   return 1


a=int(input("enter range for prime numbers"))
i=3
while i<=a :
    status= prime(i)
    if status==1 :
        print(i)
    i=i+1
    

  

    


