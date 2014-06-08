#include <stdio.h>
struct T
{
	int a : 4;
	int b : 16;
	int d : 16;
	int c : 32;
};
int main()
{
	struct T t;
	printf("%d\n",sizeof(t));
}
