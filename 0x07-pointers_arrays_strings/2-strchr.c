#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the the pointer to the char
 * @c: the character
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
