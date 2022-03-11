#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;
	long int a;
	long long int d;
	char e;
	float g;

	printf("size of a char: %lu byte(s)\n",(unsigned long)sizeof(e));
	printf("size of a int: %lu byte(s)\n",(unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n",(unsigned long)sizeof(a));
	printf("size of a long long int: %lu byte(s)\n",(unsigned long)sizeof(d));	
	printf("size of a float: %lu byte(s)\n",(unsigned long)sizeof(g));
	return(0);
}



