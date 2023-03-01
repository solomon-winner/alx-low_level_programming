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
		if ((a[counter] >= 32 && a[counter] <= 47) && ((a[counter] >= 58 && a[counter] <= 64) && (a[counter] >= 134 && a[counter] <=149)))
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
