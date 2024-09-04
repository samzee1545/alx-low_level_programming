#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combination of two digits
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		int j;

		j = i + 1;
		while (j <= 9)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
