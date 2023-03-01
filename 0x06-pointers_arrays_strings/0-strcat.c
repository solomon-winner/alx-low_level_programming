#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @src: the string
 * @dest: another string
 * Return: the pointer
 */
char *_strcat(char *dest, char *src)
{
	int index;
	char Array[15];
	int loop = 0;

	for (index = 0; index < 6; index++)
	{
		Array[loop] = src[index];
		loop++;
	}
	for (index = 0;index < 8; index++)
	{
		Array[loop] = dest[index];
		loop++;
	}
	Array[loop] = '\0';
	dest = Array;
	return (dest);
}
