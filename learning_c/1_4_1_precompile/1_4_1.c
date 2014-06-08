#include <stdio.h>
#define PI 3.14159;
#define MULTI(r) (r)*(r)*2
#define TEST(x) printf("->Wahaha,"#x"\n")
#define TESa(x) #x
#define ADDa(x,y) x##y
int main()
{
	int a=2,b=3,c=3;
	
	printf(ADDa("asd", "asdq"));	
	
	TEST(OH yeah);
	
	printf("%d\n", MULTI(a+b+c));
}
