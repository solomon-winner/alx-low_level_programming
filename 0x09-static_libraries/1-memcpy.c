#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: the destination
 * @src: the source
 * @n: bytes from memory area
 * Return: apointer to the dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

