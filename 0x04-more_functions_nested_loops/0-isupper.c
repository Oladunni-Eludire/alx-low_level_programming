#include "main.h"
/**
 * _isupper - checks for uppercase characters
 *
 * @c: uppercase letter
 *
 * Return: 1 is for uppercase, 0 is for others.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

