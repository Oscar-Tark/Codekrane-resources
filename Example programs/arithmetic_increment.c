#include <stdio.h>

int main()
{
	int a, b, c;
	a=15;
	b=a++ * 2;
	c=++a * 2;
	printf("%d\n",b);
	printf("%d\n",c);
	return 0;
}
