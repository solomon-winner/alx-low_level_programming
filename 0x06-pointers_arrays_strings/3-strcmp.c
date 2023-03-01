#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: parameter
 * @s2: paramater
 * Return: returns integer
 */
int _strcmp(char *s1, char *s2)
{
	int loop = 0;

	while ((s1[count] != '\0' && s2[count] != '\0') && (s1[count] == s2[count]))
	{
		count++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (s1[count] - s2[count]);
	}
}
