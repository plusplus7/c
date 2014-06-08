#include <stdio.h>
#include <fcntl.h>
#include <string.h>
int main()
{
	int fd=open("t.^_^",O_CREAT,S_IRWXU | S_IRGRP);
	if (fd == -1)
		perror("Open Error!\n");
	else
		printf("Created!\n");	
	close(fd);
	fd=open("t.^_^",O_RDWR);
	if (fd == -1)
		perror("Open Error!\n");
	else
	{
		char str[]="123123123";
		int tmp=write(fd,str,strlen(str));
		if (tmp != strlen(str))
			perror("Write error!\n");
	}
	lseek(fd,0,SEEK_SET);
	char stra[]="asdf";
	char strb[]="1234";
	char strc[]="qwer";
	write(fd,stra,1);
	lseek(fd,1,SEEK_SET);
	write(fd,strb,1);
	close(fd);
	return 0;
}
