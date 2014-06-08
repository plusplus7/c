#include <stdio.h>
#include <pthread.h>
volatile int i=0;
int func1()
{
	i=2;
	while (i != 1)
	{
		printf("!\n");
		sleep(3);
	}
	return 0;
}
int func2()
{
	printf("*\n");
	sleep(7);
	i=1;
	printf("*\n");
}
void do_other()
{
	for (i=0; i<2000000000;i++);
}
int main()
{
	do_other();
/*	pthread_t thd;
	pthread_t thd2;
	pthread_create(&thd,NULL,(void *)func1,NULL);
	do_other();
	pthread_create(&thd2,NULL,(void *)func2,NULL);
	while (1)
	{
		printf("0\n");
		sleep(1);
	}
	return 0;
*/}
