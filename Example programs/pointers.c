#include <stdio.h>
#include <string.h>

int main()
{
	char str_a[20];
	char* pointer;
	char* pointer2;

	strcpy(str_a, "Hello World\n0");

	pointer = str_a;
	printf(pointer);
	//printf(&str_a);

	pointer2 = pointer + 2;
	printf(pointer2);
	strcpy(pointer2, "y you guys!\n0");
	printf(pointer);
	return 0;
}
