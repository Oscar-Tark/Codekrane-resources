#include <stdio.h>

int j = 42;

void func3()
{
	int i=11;
	int j=999;

	printf("[func3] i = %p, j=%p as i = %d, j = %d\n", &i, &j, i, j);
	return;
}

void func2()
{
	int i = 7;
	printf("\t\t[func2] i = %p, j = %p containing i = %d, j = %d\n", &i,&j,i,j);
	printf("\t\t[func2] setting j = 1337\n");
	j=1337;
	func3();
	printf("\t\t[func2] i = %p, j = %p containing i = %d, j = %d\n",&i,&j,i,j);
}

void func1()
{
	int i = 5;
	printf("\t[func1] i @ 0x%08x %d\n", &i, i);
	func2();
	printf("\t[func1] j @ 0x%08x %d\n", &j, j);
	return;
}

int main()
{
	int i=3;
	printf("[main] i @ 0x%08x = %d\n", &i, i);
	printf("[main] j @ 0x%08x = %d\n", &j, j);
	func1();
	printf("[main] i @ 0x%08x = %d\n", &i, i);
	printf("[main] j @ 0x%08x = %d\n", &j, j);
	return 0;
}
