#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing base 16 numbers
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i < 16)
	{
		if (i < 10)
		{
			putchar(48 + i);
			i++;
		}
		else
		{
			putchar(87 + i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
