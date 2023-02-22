#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: the argument going to be checked
 * Return: 1 if c is lower case otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
