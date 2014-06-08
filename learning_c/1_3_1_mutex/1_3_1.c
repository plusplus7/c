#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
pthread_mutex_t mutex_number=PTHREAD_MUTEX_INITIALIZER;
int				number=1;
void * passenger_one()
{
	int cnt=0;
	while (1)
	{
		if (pthread_mutex_trylock(&mutex_number) == EBUSY)
			continue;
		if (number != 0)
		{
			cnt++;
			printf("New passenger gets ticket, total is %d\n",cnt);
		}
		pthread_mutex_unlock(&mutex_number);
		printf("d\n");
		sleep(6);
	}
}
void * geter_one()
{
	while (1)
	{
		printf("b\n");
		pthread_mutex_lock(&mutex_number);
			number++;
			printf("Added a new ticket, total is %d\n",number);
		pthread_mutex_unlock(&mutex_number);
		sleep(10);
	}
}
int main()
{
	pthread_mutex_init(&mutex_number,NULL);
	pthread_t tid1;
	pthread_t tid2;
	printf("****************\n");
	pthread_create(&tid1,NULL,passenger_one,NULL);
	sleep(3);
	pthread_create(&tid2,NULL,geter_one,NULL);
	while (1);
}
