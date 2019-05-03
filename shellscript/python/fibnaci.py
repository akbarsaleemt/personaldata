#! /bin/python3
a=int(input("enter input"))
num1=0
num2=1
new=0
for i in range(a):
    print(num1)
    new=num1+num2
    num1=num2
    num2=new

