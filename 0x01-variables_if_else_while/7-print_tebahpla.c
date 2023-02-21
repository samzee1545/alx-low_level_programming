#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints alphabets in reverse order
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar(122 - i);
		i++;
	}
	putchar('\n');
	return (0);
}
