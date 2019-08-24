#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
	char *char_ptr;
	int *int_ptr;
	int mem_size;

	if(argc < 2)
	{
		mem_size = 50;
	}
	else
	{	mem_size=atoi(argv[1]);	}

	printf("Allocating memory of size: %d", mem_size);
	char_ptr = (char*)malloc(mem_size);

	if(char_ptr == NULL)
	{
		printf("Could not allocate memory of size: %d", mem_size);
		exit(-1);
	}

	strcpy(char_ptr, "Memory allocated on the heap");
	free(char_ptr);
	printf("Free'd memory of size: %p", char_ptr);
	return 0;
}
