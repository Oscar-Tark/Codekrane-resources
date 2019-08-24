#include<stdio.h>

void function()
{
	int var = 5;
	static int static_var = 5;

	printf("normal int = %d\n", var);
	printf("static int = %d\n", static_var);

	var++;
	static_var++;
	return;
}

int main()
{
	int i;
	static int static_var = 1337;
	
	for(int i = 0; i< 5; i++)
	{
		printf("[main] static_var = %d\n", static_var);
		function();
	}
	return 0;
}
