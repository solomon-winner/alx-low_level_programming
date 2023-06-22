#include "main.h"

/**
 * is_it - checker.
 * @a: string base address.
 * @x: left index.
 * @y: rigth index.
 * Return: one or zero
 */
int is_it(char *a, int x, int y)
{
	if (a[x] == a[y])
		if (x > y / 2)
			return (1);
		else
			return (is_it(a, x + 1, y - 1));
	else
		return (0);
}

/**
 * length - counts the length
 * @a: the string to be printed
 * Return: the length of string
 */
int length(char *a)
{
	if (a[0] != '\0')
		return (1 + length(a + 1));
	return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (is_it(s, 0, length(s) - 1));
}
