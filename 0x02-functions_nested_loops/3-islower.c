#include "main.h"
/**
 * _islower - checks for lowercase characters
 *
 * @c: The ASCII code character
 *
 * Return: 1 is for lowercase, 0 is for others
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
