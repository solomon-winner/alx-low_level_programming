#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: parameter
 * @s2: paramater
 * Return: returns integer
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	if (s1 < s2)
	{
		i = -15;
	}
	else if (s2 > s1)
	{
		i = 15;
	}
	else
	{
		i = 0;
	}
	return (i);
}
