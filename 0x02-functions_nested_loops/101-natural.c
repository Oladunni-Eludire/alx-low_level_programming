#include <stdio.h>
/**
 * main - list all natural numbers below 1024
 * that are mulitples of 3 or 5
 * Return: always 0
 */
int main(void)
{
	int n, sum = 0;

	for (n = 1; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
		sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
