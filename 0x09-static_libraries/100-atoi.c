#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
	int counter = 0;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	while (s[counter])
	{
		if (s[counter] == 45)
		{
			min *= -1;
		}

		while (s[counter] >= 48 && s[counter] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[counter] - '0');
			counter++;
		}

		if (isi == 1)
		{
			break;
		}

		counter++;
	}

	ni *= min;
	return (ni);
}
