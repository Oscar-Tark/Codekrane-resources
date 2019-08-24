#include <stdio.h>

void usage(char* prog_name)
{
	printf("Usage %s <message> <# of times to repeat>\n", prog_name);
	exit(1);
}

int main(int arg_count, char* argv[])
{
	int count;

	
	printf("Repeating %d times...\n", atoi(argv[2]));
	
	for(int i=0; i<atoi(argv[2]); i++)
	{
		printf("# %d string %s", i, argv[1]);
	}
	return 0;
}
