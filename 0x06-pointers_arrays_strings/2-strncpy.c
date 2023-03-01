#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: copied character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;
	int loop;

	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
	{
		dest[loop] = src[loop];
	}
	for(;index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
