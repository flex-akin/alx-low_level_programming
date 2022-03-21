#include "main.h"

/**
 * swap_int - main
 * @a: - swap_int
 * @b: - second int
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
