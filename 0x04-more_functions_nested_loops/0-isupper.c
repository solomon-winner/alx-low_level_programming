#include "main.h"

/*
 * _isupper - checks for uppercase character.
 * @c: the character to be checked
 * Return: 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	if (c >= 97 && c <= 122)
	{
		return (0);
	}
}
