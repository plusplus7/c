#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/param.h>
#include <sys/types.h>
#include <sys/stat.h>
void init_daemon()
{
	pid_t pid;
	int i;
	pid=fork();
	if (pid > 0)
		exit(0);
	else if (pid < 0)
	{
		perror("Creating process error!\n");
		exit(0);
	}
	setsid();
	chdir("/tmp");
	umask(0);
	for (i=0; i<NOFILE; i++)
		close(i);
	return;
}
int main()
{
	init_daemon();
	FILE *fp;
	while (1)
	{
		sleep(5);	
		fp=fopen("t.txt","a+");
		fprintf(fp,"!\n");
		fclose(fp);
	}
	return 0;
}
