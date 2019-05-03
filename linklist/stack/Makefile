all:=stack
stack: main.o push.o pop.o display.o
	gcc main.o push.o pop.o display.o -o stack
main.o:main.c
	gcc -c main.c -o main.o
push.o:push.c
	gcc -c push.c -o push.o
pop.o:pop.c
	gcc -c pop.c -o pop.o
display.o:display.c
	gcc -c display.c -o display.o
clean:
	rm -rf *.o stack
