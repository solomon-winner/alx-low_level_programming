#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int counter = 0;
	int modifiedCounter;
	int reverse = 0;
	char swap;

	while (s[counter] != '\0')
	{
		counter++;
	}
	modifiedCounter = counter - 1;
	while (modifiedCounter >= 0 && reverse < modifiedCounter)
	{
		swap = s[reverse];
		s[reverse] = s[modifiedCounter];
		s[modifiedCounter] = swap;
		modifiedCounter--;
		reverse++;
	}
}
