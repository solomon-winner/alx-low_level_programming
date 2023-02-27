#include "main.h"

/**
 * print_array - prints an array of integers
 * @a: the pointer
 * @n: number of elements of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int counter = 0;
	while (counter < n)
	{
		printf("%d",*a++);
		if (counter != n - 1)
		{
			printf(", ");
		}
		counter++;
	}
	printf('\n');
}
