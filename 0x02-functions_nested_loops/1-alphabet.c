#include "main.h"
/**
 * main - Entry point
 * Description: printing lower case alphabets
 * Return: (0) always
 */
/* function printing letters */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
}
