#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the combination of three numbers
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		int j;

		j = i + 1;

		while (j <= 9)
		{
			int k;

			k = j + 1;

			while (k <= 9)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
