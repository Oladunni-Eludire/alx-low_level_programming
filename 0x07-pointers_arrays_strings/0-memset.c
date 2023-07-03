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

	while (n > 0)
	{
		s[m] = b;
		n--;
		m++;
	}
	return (s);
}
