#include <stdio.h>
int main()
{
	char string[]="asdf";
	char *p="fdsa";
	printf("%s\n",string);
	printf("%s\n",p);
	string[0]='A';
	p[0]='A';
}
