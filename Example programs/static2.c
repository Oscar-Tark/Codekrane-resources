#include<stdio.h>

void function()
{
	int var = 5;
	static int static_var = 5;

	printf("[func] var = %d located @ %p\n", var, &var);
	printf("[func] static_var = %d located @ %p\n", static_var, &static_var);

	var++;
	static_var++;
	return;
}

int main()
{
 	static int static_var = 1337;
	for(int i = 0; i<5;i++)
	{
		printf("[main] static_var = %d located @ %p\n", static_var, &static_var);
		function();
	}
	return 0;
}
