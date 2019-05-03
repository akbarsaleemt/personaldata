#include<linux/init.h>
#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/version.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("AKBAR");
MODULE_DESCRIPTION("BASIC DRIVER");
MODULE_VERSION("0.1");

  static int my_init(void)
   {  
     int *ptr;
     ptr=NULL;
     *ptr=1;
     printk(KERN_ALERT "hello world\n");
     return 0;
   }
  void  my_exit(void)
    {
      printk(KERN_ALERT"exit");
      return;
    }
module_init(my_init);
module_exit(my_exit);

