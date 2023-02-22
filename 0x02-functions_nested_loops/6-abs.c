#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 * @r: the number going to be checked
 * Return: returns the absolutevalue of the number
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (0);
	}
}
