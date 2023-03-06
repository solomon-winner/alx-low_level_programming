#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the the pointer to the char
 * @c: the character
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	unsigned int i;
	char *pointer;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			*pointer = *s[i];
		i++;
	}
	return (pointer);
}
