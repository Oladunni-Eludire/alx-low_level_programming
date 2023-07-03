#include "main.h"
/**
 * _memset - fills memory with a constant byte
 *
 * @s: starting address
 * @b: the value
 * @n: number of bytes

 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (; n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
