#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @a: the string
 * Return: string
 */
char *cap_string(char *a)
{
	int counter = 0;
	int start;

	while (a[counter] != '\0')
	{
		if (a[counter] == ' ')
		{
			start = counter + 1;
			if (a[start] <= 122 && a[start] >= 97)
			{
				a[start] = a[start] - 32;
			}
		}
		counter++;
	}
	return (a);
}
