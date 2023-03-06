#include "main.h"

/**
 * _strpbrk - searches a string
 * @s: the parameter
 * @accept: the parameter
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int counter;
	
	while (*s)
	{
		for (counter = 0; accept[counter]; counter++)
		{
			if (*s == accept[counter])
				return (s);
		}
		s++;
	}
	return (NULL);
}
