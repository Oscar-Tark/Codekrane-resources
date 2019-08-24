#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/stat.h>

void* check_malloc(void* mem_pointer);

int main(int* argc, char* argv)
{
	int filedescriptor;
	char* buffer;
	char* file;	

	strcpy(file, "~/Documents/test.txt");

	if(argc < 2)
	{
		strcpy(buffer, argv[1]);
		printf("Opening file with filedesciptor.");
		char* file_mem = (char*)check_malloc(malloc(100));
	}
	return 0;
}

void* check_malloc(void* mem_pointer)
{
	if(mem_pointer == NULL)
	{
		fprintf(stderr, "Memory allocation failed, exiting...");
		exit(-1);
	}
	return mem_pointer;
}
