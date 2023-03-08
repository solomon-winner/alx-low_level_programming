#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string
 * Return: void
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		*s++;
	}
	_putchar('\n');
}
