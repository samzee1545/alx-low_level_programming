#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * Description: printing lower case alphabets
 * Return: (0) always
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar(97 + i);
		i++;
	}
	putchar('\n');
	return;
}