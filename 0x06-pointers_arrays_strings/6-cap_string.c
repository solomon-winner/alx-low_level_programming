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
		if (a[counter] == 9 || a[counter] == 10 || a[counter] == 32
				|| a[counter] == 33 || a[counter] == 34
				|| a[counter] == 40 || a[counter] == 41
				|| a[counter] == 44 || a[counter] == 46
				|| a[counter] == 59 || a[counter] == 63
				|| a[counter] == 123 || a[counter] == 125 || a[counter] == ' ')
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
