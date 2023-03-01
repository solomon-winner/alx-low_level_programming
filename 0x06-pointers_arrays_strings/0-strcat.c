#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: the string
 * @dest: another string
 * Return: the pointer
 */
char *_strcat(char *dest, char *src)
{
	int index = 0;
	int loop = 0;

	while(dest[index] != '\0')
	{
		index++;
	}
	while (src[loop] != '\0')
	{
		dest[index] = src[loop];
		loop++;
		index++;
	}
	return (dest);
}
