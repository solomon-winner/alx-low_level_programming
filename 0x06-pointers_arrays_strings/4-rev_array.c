#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int swap;
	int counter = 0;
	int countDown = n - 1;

	for (; counter < countDown; counter++)
	{
		swap = a[counter];
		a[counter] = a[countDown];
		a[countDown--] = swap;
	}
}
