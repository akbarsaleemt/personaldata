all:= linklist
linklist: main.o createnode.o displaylist.o reverselink.o dblelnklst.o displaydouble.o deleteatpositn.o backward.o reverse.o deletebegin.o
	gcc main.o createnode.o displaylist.o reverselink.o dblelnklst.o displaydouble.o backward.o reverse.o deleteatpositn.o deletebegin.o -o linklist
main.o: main.c
	gcc -c main.c -o main.o
createnode.o: createnode.c 
	gcc -c createnode.c -o createnode.o
displaylist.o: displaylist.c
	gcc -c displaylist.c -o displaylist.o
reverselink.o:reverselink.c
	gcc -c reverselink.c -o reverselink.o

dblelnklst.o: dblelnklst.c
	gcc -c dblelnklst.c -o dblelnklst.o
displaydouble.o:displaydouble.c
	gcc -c displaydouble.c -o displaydouble.o
backward.o: backward.c
	gcc -c backward.c -o backward.o
reverse.o:reverse.c
	gcc -c reverse.c -o reverse.o
deletebegin.o:deletebegin.c
	gcc -c deletebegin.c -o deletebegin.o
deleteatpositn.o:
	gcc -c deleteatpositn.c -o deleteatpositn.o
clear:
	rm -rf *.o linklist

