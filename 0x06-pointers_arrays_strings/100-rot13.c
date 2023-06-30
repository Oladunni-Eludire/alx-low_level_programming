#include "main.h"
#include <stdio.h>
/**
 * rot13 - encodes a string using ROT13
 *
 * @s: string
 *
 * Return: s.
 */
char *rot13(char *s)
{
	int c;
	int d;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIKJLMnopqrstuvwxyzabcdefghijklm";

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; d < 52; d++)
		{
			if (s[c] == data1[d])
			{
				s[c] = datarot[d];
				break;
			}
		}
	}
	return (s);
}
