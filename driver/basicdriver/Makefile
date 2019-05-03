obj-m :=basicdriv.o
#KDIR:=/lib/modules/$(shell uname -r)/build
#PWD:=$(shell pwd)
#all:
#	$(MAKE) -C $(KDIR)SUBDIR=$(PWD) modules	
all:
		make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
		rm -rf *.o *.ko *.mod.o *.order *.symvers *.mod.c 
