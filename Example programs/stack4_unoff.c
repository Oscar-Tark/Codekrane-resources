#include <stdio.h>

void function1(int a)
{
	a=a+a;
	printf("%d", a);
}

void function2(int b)
{
	b=b+b;
	printf("%d", b);
}

int main()
{
	function1(53);
	function2(78);
	return 0;
}
