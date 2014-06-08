#include <stdio.h>
int get_max(int a,int b)
{
	return a>b?a:b;
}

int get_min(int a,int b)
{
	return a<b?a:b;
}
int cmp(int a,int b)
{
	return a>b;
}
int sort(int a,int b,int (*func)(int a,int b))
{
	if (func(a,b) == 0)
		printf("b < a\n");
	else
		printf("a < b\n");
}
int main()
{
	int (*p)(int a,int b);
	p=get_min;
	printf("%d\n",p(1,2));
	p=get_max;
	printf("%d\n",p(1,2));
	sort(1,2,cmp);
}
