#include "main.h"

/**
 * is_identical - ... ...
 * @a: string_1 base address
 * @b: string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 * Return: one or zero
 */

int is_identical(char *a, char *b, int i, int j)
{
	if (a[i] == '\0' && b[j] == '\0')
		return (1);
	if (a[i] == b[j])
		return (is_identical(a, b, i + 1, j + 1));
	if (a[i] == '\0' && b[j] == '*')
		return (is_identical(a, b, i, j + 1));
	if (b[j] == '*')
		return (is_identical(a, b, i + 1, j) || is_identical(a, b, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: ... ...
 */

int wildcmp(char *s1, char *s2)
{
	return (is_identical(s1, s2, 0, 0));
}
