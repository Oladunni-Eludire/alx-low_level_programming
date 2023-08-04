#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int f, count = 0;
	unsigned long int curr;
	unsigned long int exclusive = n ^ m;

	for (f = 63; f >= 0; f--)
	{
		curr = exclusive >> f;
		if (curr & 1)
			count++;
	}

	return (count);
}
