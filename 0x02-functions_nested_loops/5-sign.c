#include "main.h"
/**
 * print-sign - prints the sign of number
 * @n - number that will be given
 * Return: 1 for n > 0 0 for n = 0, -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
