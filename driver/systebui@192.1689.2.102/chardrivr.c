#include<linux/kernel.h>
#include<linux/module.h>
#include<linux/init.h>
#include<linux/fs.h>
#include<linux/wait.h>
#include<linux/poll.h>
#include<linux/ioport.h>
#include<linux/cdev.h>
#include<linux/errno.h>
MODULE_AUTHOR("AKBAR SALEEM");
MODULE_LICENSE("GPL....");
MODULE_DESCRIPTION("CHARECTER DRIVER");
#define DEVICE "advanced char driver"
#define MAX 1024
#define MAJOR 42
#define MINOR 5
wait_queue_head_t wq;
static int my_start(void);
void my_exit(void);
static int my_open(struct inode*,struct file *);
static int my_close(struct inode *, struct file *);
static ssize_t my_write(struct file *,const char *, size_t ,loff_t *);
static ssize_t my_read(struct file *, char *, size_t ,loff_t *);
typedef struct{
  char buf[MAX];
  int noofchar;
  struct cdev mycdev;
}mydev_t;
mydev_t mydev;
dev_t devno;
static struct file_operations fops =
{
  .read =my_read,
  .write=my_write,
  .open=my_open,
  .release=my_close
};

static int my_start(){
  int ret;
  devno=MKDEV(MAJOR,0);
    ret=register_chrdev_region(devno,MINOR,DEVICE);
    if(ret<0){
        printk("<1>""device not registered");
        my_exit();
    }
    cdev_init(&mydev.mycdev,&fops);
    cdev_add(&mydev.mycdev,devno,MINOR);
    mydev.noofchar=0;
    init_waitqueue_head(&wq);
    mydev.mycdev.owner=THIS_MODULE;
        printk("<1>""device successfully registered");
    return 0;
}

void my_exit(){
  cdev_del(&mydev.mycdev);
  unregister_chrdev_region(devno,MINOR);
        printk("<1>""device successfully unregistered");
}

static int my_open(struct inode *inode,struct file *file){
  try_module_get(THIS_MODULE);
  file->private_data=&mydev;
  if(file->f_mode&FMODE_READ)
      printk("<1>""open read error");
  if(file->f_mode&FMODE_WRITE)
      printk("<1>""open write error");
  return 0;
}
static int my_close(struct inode *inode, struct file *file){
  module_put(THIS_MODULE);
  printk("<1>""close");
  return 0;
}
static ssize_t my_write(struct file *file,const char *wbuf,size_t count,loff_t *offset){
  mydev_t *tdev;
  tdev=file->private_data;
  if(count<MAX)
    count=MAX;
    copy_from_user(tdev->buf, wbuf, count);
    tdev->noofchar=count;
    wake_up_interruptible(&wq);
    return count;
}
 static ssize_t my_read(struct file *file ,char *rbuf,size_t count, loff_t *offset){
   mydev_t *tdev;
   tdev=file->private_data;
   wait_event_interruptible(wq,tdev->noofchar>0);
     if(tdev->noofchar<count)
       tdev->noofchar=count;
   copy_to_user(rbuf,tdev->buf,count);
   tdev->noofchar=0;
   return count;
 }
module_init(my_start);
module_exit(my_exit);

  



