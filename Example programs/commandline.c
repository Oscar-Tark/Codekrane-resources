#include <stdio.h>

int main(int arg_count, char *arg_list[])
{
	printf("There were %d arguments provided:\n", arg_count);
	for(int i = 0; i<arg_count;i++)
	{
		printf("Argument %d is %s", i, arg_list[i]);
	}
	return 0;
}
