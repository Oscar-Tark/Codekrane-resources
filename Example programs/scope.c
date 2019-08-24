#include <stdio.h>

void func3()
{
	int i=11;
	printf("\t\t\t[func3 var] i = %d\n", i);
	return;
}

void func2()
{
	int i = 7;
	printf("\t\t[func2 var] i=%d\n", i);
	func3();
	printf("\t\t[back in func2] i %d\n", i);
	return;
}

void func1()
{
	int i=5;
	printf("\t\t[func1 var] i=%d\n", i);
	func2();
	printf("\t\t[back in func1] i=%d\n", i);
	return;
}

int main()
{
	int i = 3;
	printf("[main] i=%d\n", i);
	func1();
	printf("[back in main] i=%d\n", i);
	return 0;
}
