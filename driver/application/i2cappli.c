#include<stdio.h>
#include<linux/i2c-dev.h>
#include<linux/i2c.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<unistd.h>
#include<i2c/smbus.h>

void main()
{
    int fd;
    int adapter_nr=2;
    char fname[20];
    snprintf(fname,19,"/dev/i2c-%d",adapter_nr);
    fd=open(fname,O_RDWR);
        if(fd<0){
          printf("file open error\n");
          return;
        }
     int addr=0x40;//providing i2c address
        if(ioctl(fd,I2C_SLAVE,addr)<0){
          printf("ioctl error\n");
          return;
        }
      __u8 reg=0x10;// device register to access
      __s32 res;
      char buf[10];
      /* using smbus commands*/
      res=i2c_smbus_read_word_data(fd,reg);
          if(res<0){
            printf("i2c transaction failed for read word\n");
            return;
          }
      res=i2c_smbus_write_word_data(fd,reg,0x6543);
          if(res<0){
            printf("i2c write transaction failed\n");
            return;
          }
       buf[0]=reg;
       buf[1]=0x43;
       buf[2]=0x65;
          if(write(fd,buf,3)!=3){
            printf("write failed\n");
            return;
          }
          if(read(fd,buf,1)!=1){
            printf("read failed\n");
            return;
          }
          printf("buf[0]=%s\n",buf[0]);
}

