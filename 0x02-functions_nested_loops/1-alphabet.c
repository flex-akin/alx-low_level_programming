#include "main.h"

/**
 * main - check the code
 * Description: it prints the alphabet in a lower case followed by a new line
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
