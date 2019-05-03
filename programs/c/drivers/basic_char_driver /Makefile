obj-m += basic_chardrivr.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	rm -rf *.o *.mod.o *.order *.symvers *.ko *.mod.c 
	

