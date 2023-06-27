#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: array
 * @n: elements of the array
 * Return: a and n inputs.
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		printf("\n");
}
