#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 */
void print_alphabet_x10(void)
{
	int n;
	int a;

	for (n = 1; n <= 10; n++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
