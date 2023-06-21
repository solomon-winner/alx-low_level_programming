#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter
 * @array: array
 * @size: the array size
 * @action: pointer
 * Return: Nothing .
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int counter;

	if (array && size && action)
	{
		counter = 0;
		for (; counter < size; counter++)
			action(array[counter]);
	}
}
