#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer of the string
 * Return: the length
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s++)
	{
		counter++;
	}
	return (counter);
}
