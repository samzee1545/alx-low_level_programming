#include "main.h"
/**
 * main - Entry point
 * Description: printing lower case alphabets
 * Return: (0) always
 */
void print_alphabet(void)
{
	char letters;
	for (letters = 'a'; letters <= 'z'; letters++)
	{
		_putchar(letters);
	}
	_putchar('\n');
	return;	
}
