#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the integer
 * @b: another integer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
