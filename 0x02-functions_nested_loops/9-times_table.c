#include "main.h"
/**
 *
 *
 *
 */
void times_table(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if(i == j)
			{
				int a = 0;
				while (a < 18)
				{
					j = j * a;
					_putchar(j);
					_putchar(44);
					_putchar(' ');
					a = a + 2;
				}
				_putchar('\n');
			}
		}
	}
}
