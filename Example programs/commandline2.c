#include <stdio.h>

void usage(char * program_name)
{
	printf("Usage: %s <message> <# of times to repeat\n>", program_name);
	exit(1);
	return;
}

int main(int arg_count, char *arg_list[])
{
	int count;


	if(arg_count <2)
	{
		usage(arg_list[0]);
	}
	
	count = atoi(arg_list[1]);
	printf("Repeating %d times.", count);

	for(int i=0; i<count;i++)
	{
		printf("%3d - %s\n", i, arg_list[1]);
	}
	return 0;
}
