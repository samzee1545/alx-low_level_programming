#include "main.h"
/**
 * print_alphabet_x10 - To print alphabet x10
 */
void print_alphabet_x10(void)
{
	int i;
	char letters;
	
	for (i = 0; i < 10; i++)
	{
		for (letters = 'a'; letters < 'z'; i++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
