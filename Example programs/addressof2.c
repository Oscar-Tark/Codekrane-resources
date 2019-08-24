#include <stdio.h>

int main()
{
	int int_var = 5;
	int *int_ptr;

	int_ptr = &int_var;

	printf("int_ptr = 0x%08x\n", int_ptr);
	printf("&int_ptr = 0x%08x\n", &int_ptr);
	printf("*int_ptr = 0x%08x\n", *int_ptr);

	printf("int_var contains: %d. And is located @: %08x\n", int_var, &int_var);
	printf("int_ptr contains: 0x%08x. And is located @: 0x%08x And points to: %d\n", int_ptr, &int_ptr, *int_ptr);
	
	printf("Changing value of int_var through int_ptr...\n");
	*int_ptr=190190;
	printf("New value of int_var is %d", *int_ptr);
	return 0;
}
