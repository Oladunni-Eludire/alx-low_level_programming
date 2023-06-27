#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: ist integer to be swapped
 * @b: 2nd integer to be swapped.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
