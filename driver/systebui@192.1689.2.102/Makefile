obj-m:=chardrivr.o


all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
	gcc readwrite.c -o application
	gcc write.c -o writeap
	gcc read.c -o readap
clean:
	rm -rf *.o *.ko *.mod.c *.mod.o *.order *.symvers application readap writeap

