#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: string
 *
 * Return: every other character.
 */
void puts2(char *str)
{
	int longi = 0;
	int i = 0;
	char *y = str;
	int k;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	i = longi - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
