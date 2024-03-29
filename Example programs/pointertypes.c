#include <stdio.h>

int main()
{
	int i;
	char char_array[5] = {'a','b','c','d','e'};
	int int_array[5] = {1,2,3,4,5};

	char * char_pointer;
	int * int_pointer;

	//Assigning variable addresses to specific address pointers.
	char_pointer = char_array;
	int_pointer = int_array;

	for(int i=0; i < 5; i++)
	{
		printf("[integer pointer] points to %p, which contains the integer %d\n", int_pointer, *int_pointer);
		int_pointer++;
	}

	for(int i=0; i<5; i++)
	{
		printf("[char pointer] points to %p, which contains the charachter %d\n", char_pointer, *char_pointer);
		char_pointer++;
	}
	return 0;
}
