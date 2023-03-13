#include "main.h"

/**
 * _length - counts an array
 * @N: number of elements of the array
 * Return: number of an array
 */
int _length(char *N)
{
	unsigned int counter = 0;

	while (N[counter] != '\0')
	{
		counter++;
	}

	return (counter);
}

/**
 * _copy - copy the element of the array
 * @source: the source the string
 * @destination: the destination
 * Return: destination
 */
int *_copy(char *destination, char *source)
{
	int num;

	for (num = 0; source[num] != '\0'; num++)
		destination[num] = source[num];
	destination[num] = '\0';

	return (destination);
}

/**
 * strdup - returns a pointer
 * @str: the string
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	char *destination;
	unsigned int N;

	if (str == 0)
		return (NULL);
	N = _length(str) + 1;

	destination = (char *) malloc(N * sizeof(char));

	if (destination == 0)
		return (NULL);
	_copy(destination, str);
	return (destination);
}
/*solomon_Winner*/
