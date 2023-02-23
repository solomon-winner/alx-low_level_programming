#include "main.h"

/**
 * _isupper - check uppercase letters
 * @c: character to be checked
 *
 * Return: 0 for uppercase 1 for lower case
 */
int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
