#include <stdio.h>

int main()
{
        char char_array[5] = {'a','b','c','d','e'};
        int int_array[5] = {1,2,3,4,5};

        char* char_pointer;
        int* int_pointer;

        char_pointer = int_array;
        int_pointer = char_array;

        for(int i=0; i<5;i++)
        {
                printf("[integer pointer -> char_array] points to %p, and contains %c\n", int_pointer, *int_pointer);
		int_pointer++;
	}
	return 0;
}
