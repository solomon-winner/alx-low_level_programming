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
	int loop;

	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
	{
		dest[loop] = src[loop];
	}
	for (;loop < n; loop++)
	{
		dest[loop] = '\0';
	}
	return (dest);
}
