#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: the character
 * Return: NULL or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *pointer;
	unsigned int counter;

	if (size == 0)
		return (NULL);
	pointer = (char *) malloc(size * sizeof(c));
	if (pointer == 0)
	{
		return (NULL);
	}
	else
	{
		for (counter = 0; counter < size; counter++)
			*(pointer + counter) = c;
	}
	return (pointer);
}
