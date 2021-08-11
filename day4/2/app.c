#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main()
{
	int fd;
	char k_rd_buff[100];
	fd = open("/dev/MyCharDevice",O_RDWR,777);
	

	if(fd < 0)
	{
		printf("not able to open the device\n");
		return -1;
	}
	
	read(fd,k_rd_buff,50);
	printf("the data the we got from kernel:\n\n\"%s\"",k_rd_buff);
	close(fd);
	return 0;
}
