#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars, and initializes
 * @size: size of an array
 * @c: specific char
 * Return: apointer
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int a;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	for (a = 0; a < size; a++)
		s[a] = c;

	return (s);
}
