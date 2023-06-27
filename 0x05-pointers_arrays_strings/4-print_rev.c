#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string
 *
 * Return: 0.
 */
void print_rev(char *s)
{
	int longi = 0;
	int r;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (r = longi; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
