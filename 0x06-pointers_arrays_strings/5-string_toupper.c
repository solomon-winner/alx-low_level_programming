#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @a: the character
 * Return: char
 */
char *string_toupper(char *a)
{
	int counter = 0;

	while (a[counter] != '\0')
	{
		if (a[counter] <= 122 && a[counter] >= 97)
		{
			a[counter] = a[counter] - 32;
		}
		counter++;
	}
	return (a);
}
