all:=queue
queue: main.o enque.o deque.o display.o
				gcc main.o enque.o deque.o display.o -o queue
enque.o:enque.c
				gcc -c enque.c
deque.o:deque.c
				gcc -c deque.c
display.o:display.c
				gcc -c display.c
debug:
				gcc -g main.c enque.c deque.c display.c -o debug
clear:
				rm -rf *.o *.c~ queue debug
