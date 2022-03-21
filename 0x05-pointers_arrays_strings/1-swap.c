#include "main.h"

/**
 * swap - main
 * @n: - swap integers
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
