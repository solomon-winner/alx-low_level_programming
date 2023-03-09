#include "main.h"

/**
 * paliChecker - decreases the string
 * @c: parameter
 * Return: char
 */
char paliChecker(char *c)
{
	if (c != '\0')
		paliChecker(c++);
	return (*c);
}
/**
 * is_palindrome - checks if the function is palindrome
 * @s: pointer
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (s++ == palichecker(*s))
		return (1);
	return (0);
}
