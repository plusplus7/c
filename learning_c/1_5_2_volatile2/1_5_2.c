#include <stdio.h>
#include <signal.h>
int a=0;
void handler(int signo)
{
	a=1;
	printf("%d\n",a);
}
int main()
{
	signal(SIGINT,handler);
	while (!a);
	return 0;
}
