#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int u;
	unsigned int decimal = 0;

	if (!b)
		return (0);

	for (u = 0; b[u]; u++)
	{
		if (b[u] < '0' || b[u] > '1')
			return (0);
		decimal = 2 * decimal + (b[u] - '0');
	}

	return (decimal);
}
