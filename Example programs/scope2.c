#include <stdio.h>
int j=42;

void func3()
{
	int i = 11;
	int j = 999;
	printf("\t\t\t[func3] i=%d, j=%d\n", i ,j);
}

void func2()
{
	int i=7;
	printf("\t\t[func2] i=%d and j=%d", i,j);
	printf("\t\t[func2 - Setting j to 1337]\n");
	j=1337;
	func3();
	return;
}

void func1()
{
	int i=5;
	printf("\t[func1] i = %d, j=%d\n", i,j);
	func2();
	printf("\t[func1] i = %d, j= %d\n", i,j);
	return;
}

int main()
{
	int i=3;
	printf("[main] i = %d, j = %d\n", i, j);
	func1();
	printf("[main] i = %d, j = %d\n", i, j);
	return 0;
}
