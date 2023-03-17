#include "main.h"
/**
 * reset_to_98 - the function
 * @n: parameter
 * return: no return (void function)
 */

void reset_to_98(int *n)
{
	int m = 98;
	int *p;

	p = &m;
	*n = *p;
}
