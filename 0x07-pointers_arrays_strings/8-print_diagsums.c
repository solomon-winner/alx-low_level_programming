#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: parameter
 * @size: parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, y, p, l = 0, r = 0;

	for (x = 0; x < size; x++)
	{
		p = (x * size) + x;
		l += *(a + p);
	}
	for (y = 0; y < size; y++)
	{
		p = (y * size) + (size - 1 - y);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}

