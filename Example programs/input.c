#include <stdio.h>
#include <string.h>

int main()
{
	char message[10];
	int count, i;

	strcpy(message, "Hello World!");
	
	printf("Repeat how many times?\n");
	scanf("%d", &count);

	for(i=0; i<count;i++)
	{
		printf("%s", message);
	}
	return 0;
}
