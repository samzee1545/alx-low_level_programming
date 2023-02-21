#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing possible comb. of  single numbers
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
