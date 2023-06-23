#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100
 * print fizz for multiples of 3
 * print buzz for multiples of 5
 * print fizzbuzz for multiples of 3 and 5
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizbuzz");
		}
		else if (i % 3 == 0 && i % 5 != 0)
		{
			printf("fizz");
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("buzz");
		}
		else if (i == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
