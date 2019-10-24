KERNEL_VERSION=$(shell uname -r)
PWD=$(shell pwd)

obj-m := xyz_module_0.o

all : clean main

main : main.c
	gcc -o $@ $^ -std=c99 -Wall -O2

.PHONY : module
module :
	$(MAKE) -C /lib/modules/$(KERNEL_VERSION)/build M=$(PWD) modules

.PHONY : launch
launch :
	sudo insmod xyz_module_0.ko

.PHONY : clean
clean :
	rm -rf .cache.mk *.order *.symvers *.mod* *.tmp_versions *.ko* *.o main xyz_module_0
