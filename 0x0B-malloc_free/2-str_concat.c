#include "main.h"

/**
 * _length - the number of the element of array
 * @arr: the number
 * Return: the number of array
 */

int _length(char *arr)
{
	unsigned int counter = 0;

	while (arr[counter] != '\0')
		counter++;

	return (counter);
}

/**
 * str_concat - concatunate the two arrays
 * @s1: first array
 * @s2: second array
 * Return: the concatunated array
 */

char *str_concat(char *s1, char *s2)
{
	char *destination;
	unsigned int z;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	z = (_length(s1) + _length(s2) + 1);

	destination = (char *) malloc(z * sizeof(char));

	if (destination == 0)
		return (NULL);

	while (*(s1 + x) != '\0')
	{
		*(destination + x) = *(s1 + x);
		x++;
	}

	while (*(s2 + y) != '\0')
	{
		*(destination + x) = *(s2 + y);
		y++;
		x++;
	}

	return (destination);
}
