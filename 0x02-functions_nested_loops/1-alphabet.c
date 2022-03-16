#include "main.h"

/**
 * print_alphabet: check description
 * Description: it prints the alphabet in a lower case followed by a new line
 * Return: nothing.
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
