#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/fs.h>
MODULE_AUTHOR("AKBAR");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("CHARECTER DRIVER");
int mydev_init(void);
void mydev_exit(void);
#define DEVICE_NAME "chardriv"
#define BUF_LEN 100
static int Major;
static char msg[BUF_len];
static struct file_operations mydev_ops{
  .open= mydev_open,
  .read=mydev_read,
  .write=mydev_write,
  .close=mydev_close,
}
dev_t devno;
int mydev_init()
{
  devno=MKDEV
  printk(KERN_INFO"mydriver_init");
  Major = register_chardev_region(devno,10,DEVICE_NAME);
  return 0;
}
void mydev_exit()
{
  printk(KERN_INFO"exit driver");
}

module_init(mydev_init);
module_exit(mydev_exit);

