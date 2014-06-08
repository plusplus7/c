#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
int *func(void *arg)
{
	pthread_t thd;
	thd=pthread_self();
	printf("new thread: %u\n",thd);
	return NULL;
}
int main()
{
	pthread_t thd;
	printf("main ID: %u\n",pthread_self());
	if (pthread_create(&thd,NULL,(void *)func,NULL) != 0)
		printf("fail\n");
	sleep(100);
	return 0;
}
