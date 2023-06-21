#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @array: array
 * @size:array size
 * @cmp: pointer
 * Return:if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int counter;

	if (array && size && cmp)
	{
		counter = 0;
		for (; counter < size; counter++)
		{
			if (cmp(array[counter]))
				return (counter);
		}
	}
	return (-1);
}
