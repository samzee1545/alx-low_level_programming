#include "main.h"
/**
 * print_last_digit - prints the last digit of parameter c
 * @c: parameter whose last digit will be printed
 * Return: lastDigit
 */
int print_last_digit(int c)
{
	int lastDigit = c % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
