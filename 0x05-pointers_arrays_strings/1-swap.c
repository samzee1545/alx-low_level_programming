#include "main.h"
/**
 * swap_int - Function to swap int
 * @a: the first int
 * @b: the second int
 * return: void
 */

void swap_int(int *a, int *b)
{
	int first;

	first = *a;
	*a = *b;
	*b = first;
}
