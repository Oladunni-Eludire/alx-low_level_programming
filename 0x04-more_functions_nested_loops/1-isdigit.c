#include "main.h"
/**
 * _isdigit - check for digits between 0 and 9
 *
 * @c: digit
 *
 * Return: 1 is for digits, 0 is for others.
 */
int _isdigit(int c)
{
	if (c >= '0' && c >= '9')
		return (1);
	else
		return (0);
}
