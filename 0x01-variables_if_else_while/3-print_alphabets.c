#include <stdio.h>
/**
 * main - Entry point
 * Description: Printing alphabets in both lowercase and upper
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i < 52)
	{
		if (i < 26)
		{
			putchar(97 + i);
			i++;
		}
		else
		{
			putchar(39 + i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
