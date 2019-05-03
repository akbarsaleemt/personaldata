obj-m := rpi1.o

KDIR =/home/takkaakb/linux-4.9.15

PWD := $(shell pwd)

default:
	$(MAKE) ARCH=$(ARCH) CROSS_COMPILE=$(CROSS_COMPILE) -C $(KDIR) SUBDIRS=$(PWD) modules
clean:
	@rm -rf a.out
	$(MAKE) -C $(KDIR) SUBDIRS=$(PWD) clean

#make ARCH=arm CROSS_COMPILE=arm-linux-
