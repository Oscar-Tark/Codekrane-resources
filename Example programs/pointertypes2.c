#include <stdio.h>

int main()
{
	char char_array[5] = {'a','b','c','d','e'};
	int int_array[5] = {1,2,3,4,5};

	char* char_pointer;
	int* int_pointer;

	char_pointer = int_array;
	int_pointer = char_array;

	//Remember int_pointers count in integers which are 4 bytes
	for(int i=0; i<5;i++)
	{
		printf("[integer pointer] points to %p, and contains the character %c\n", int_pointer, *int_pointer);
		int_pointer++;
	}

	//Remember char_pointers count in char which are 1 byte
	for(int i=0; i<15;i++)
	{
		printf("[char pointer] points to %p, and contains the integer %d\n", char_pointer, *char_pointer);
		char_pointer++;
	}

	return 0;
}
