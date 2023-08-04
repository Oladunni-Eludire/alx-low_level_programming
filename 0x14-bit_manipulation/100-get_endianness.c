#include "main.h"

/**
 * get_endianness - checks the endianness 0f a machine
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *) &e;

	return (*c);
}
