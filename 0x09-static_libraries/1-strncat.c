#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int loop;

	while (dest[index] != '\0')
	{
		index++;
	}

	for (loop = 0; loop < n && src[loop] != '\0'; loop++)
	{
		dest[index] = src[loop];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
