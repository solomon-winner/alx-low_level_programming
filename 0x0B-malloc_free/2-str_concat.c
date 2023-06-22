#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: ... ...
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, length1, length2, length;
	char *result;

	length1 = length2 = 0;

	if (s1 != NULL)
	{
		a = 0;
		for (length1 = 0; s1[a++] != '\0'; length1++)
			;
	}

	if (s2 != NULL)
	{
		a = 0;
		for (length2 = 0; s2[a++] != '\0'; length2++)
			;
	}

	length = length1 + length2;
	result = (char *)malloc(sizeof(char) * (length + 1));
	if (result == NULL)
		return (NULL);

	for (a = 0; a < length1; a++)
		result[a] = s1[a];
	for (b = 0; b < length2; b++, a++)
		result[a] = s2[b];
	result[length] = '\0';

	return (result);
}
