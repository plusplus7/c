#include <stdio.h>
#include "func1.h"
#include "func2.h"
int main()
{
	int n;
	n=12;
	func1(&n);
	printf("%d\n",n);
	func2(&n);
	printf("%d\n",n);
	return 0;
}
