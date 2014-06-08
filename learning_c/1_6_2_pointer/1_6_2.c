#include <stdio.h>
#include <stdlib.h>
int tmp;
int f()
{
	int *p=NULL;
	p=(int *)malloc(sizeof(int));
	*p=123;
	tmp=p;
}
int main()
{
	int *p;
	f();
	p=tmp;
	printf("%d\n",(*p));
}
