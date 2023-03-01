#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: parameter
 * @n: parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int Array[] = a;
	int count = 0;
	int countDown = n - 1;

	for (; count < n; count++)
	{
		Array[count] == a[count];
	}
	count = 0;
	for (; countDown >= 0; countDown--)
	{
		a[count] = Array[countDown];
		count++;
	}
	return (a);
}
