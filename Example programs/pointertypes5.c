#include <stdio.h>

int main()
{
        char char_array[5] = {'a','b','c','d','e'};
        int int_array[5] = {1,2,3,4,5};

	unsigned int hacky_nonpointer;

	hacky_nonpointer=(unsigned int)char_array;

        for(int i=0; i<5;i++)
        {
                printf("[void pointer -> char_array] points to %p, and contains %c\n", hacky_nonpointer, *((char*)hacky_nonpointer));
                hacky_nonpointer = hacky_nonpointer + sizeof(char);
        }

	hacky_nonpointer = (unsigned int)int_array;

	for(int i=0; i<5;i++)
        {
                printf("[void pointer -> int_array] points to %p, and contains %d\n", hacky_nonpointer, *((int*)hacky_nonpointer));
                hacky_nonpointer = hacky_nonpointer + sizeof(int);
        }
	return 0;
}
