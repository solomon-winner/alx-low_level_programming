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
	int Characters[] = [9,10,32,33,34,40,41,44,46,59,63,123,125];
	int i;
	bool flag = false;

	while (a[counter] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (a[counter] == Character[i])
				flag = true;
		}
		if (flag == true)
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
