#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints numbers with putchar
 * Return: 0 (always)
 */
int main(void)
{
	int i = 0;

	while(i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
