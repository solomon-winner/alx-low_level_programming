#include "main.h"

/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 * Return: pointer to the dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter;

	for (counter = 0; src[counter] != '\0'; counter++)
	{
		dest[counter] = src[counter];
	}
	dest[counter] = '\0';
	return (dest);
}

