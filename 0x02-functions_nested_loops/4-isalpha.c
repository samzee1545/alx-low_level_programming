#include "main.h"
/**
 * _isalpha - checks for letters
 * @c: First argument
 * Return: 1 for letters, 0 for otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
