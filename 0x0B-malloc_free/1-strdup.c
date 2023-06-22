#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *cpy;
	int a, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	cpy = (char *)malloc((sizeof(char) * length) + 1);
	if (cpy == NULL)
		return (NULL);

	a = 0;
	while (a < length)
	{
		cpy[a] = str[a];
		a++;
	}
	cpy[length] = '\0';

	return (cpy);
}
