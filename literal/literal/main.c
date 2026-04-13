#include <stdio.h>

void get_your_name(char* name);

int main()
{
	char name[100];
	get_your_name(name);
	printf("Hello, %s\n", name);
	printf("Nice to meet you, too\n");
	return 0;
}