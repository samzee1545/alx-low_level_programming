#include "main.h"
/**
 * _abs - checks for absolute value of an integer
 * @c: integer to use
 * Return: abv
 */
int _abs(int c)
{
	unsigned int abv;

	if (c >= 0)
		abv = c;
	else 
		abv = -c;
	return (abv);
}
