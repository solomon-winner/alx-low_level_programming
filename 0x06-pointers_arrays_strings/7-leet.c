#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @e: parameter
 * Return: char
 */
char *leet(char *e)
{
	int a, b;
	char q[] = "aAeEoOtTlL";
	char p[] = "4433007711";

	for (a = 0; *(e + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (q[b] == e[b])
				s[a] = p[b];
		}
	}
	return (e);
}
