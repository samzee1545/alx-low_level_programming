#include <stdio.h>
/**
 * main - Entry point
 * Description: printing alphabets except some letters
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		if (i != 4 && i != 16)
		{
			putchar(97 + i);
			i++;
		}
		else
		{
			i++;
		}
	}
	putchar('\n');
	return (0);
}
