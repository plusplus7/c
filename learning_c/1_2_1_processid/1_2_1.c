#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main()
{
	printf("my pid=%d\n",getpid());
	printf("my ppid=%d\n",getppid());
	printf("my uid=%d\n",getuid());
	printf("my euid=%d\n",geteuid());
	printf("my gid=%d\n",getgid());
	printf("my egid=%d\n",getegid());
	pid_t pid=fork();
	if (pid == -1)
	{
		perror("fork error\n");
		exit(0);
	}
	else if (pid == 0)
	{
		printf("It's child process, my pid=%d\n",getpid());
	}
	else
		printf("It's parent process, my pid=%d\n",getpid());
	if (pid != 0)
	{
		int a;
		pid_t tip;
		printf("this is pid%d,my ppid=%d\n",getpid(),getppid());
		printf("Father's going!\n");
		tip=wait(&a);
		return 0;	
	}
	sleep(50);
	return 0;
	printf("this is pid%d,my ppid=%d\n",getpid(),getppid());
	printf("this is pid%d,my ppid=%d\n",getpid(),getppid());
	printf("this is pid%d,my ppid=%d\n",getpid(),getppid());

}
