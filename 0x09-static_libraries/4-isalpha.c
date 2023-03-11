#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 * @c: the argument going to be checked
 * Return: 1 if c is lower case or upper case otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
