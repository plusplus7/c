#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p=malloc(10);
	printf("%x%x%x%x\n",p[10],p[11],p[12],p[13]);
	int a[10];
	printf("%x%x%x%x\n",a[10],a[11],a[12],a[13]);
}
