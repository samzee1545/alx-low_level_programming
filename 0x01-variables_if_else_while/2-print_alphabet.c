#include <stdio.h>
/**
 * main - Entry point
 * Description: To print alphabets in lowercase
 * Return: 0 (Always)
 */
int main(void)
{
	int i = 0;

	while (i < 26)
	{
		putchar(97 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
