#include "main.h"
/**
 * _isalpha - check for alphabetic characters
 *
 * @c: uppercase or lowercase letter
 *
 * Return: 1 is for aplhpabets, 0 is for others.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
