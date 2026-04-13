#include <stdio.h>

void get_your_name(char *name)
{
	printf("Input your name? : ");
	scanf_s("%99s", name, 100);
}