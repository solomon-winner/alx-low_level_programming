#include "main.h"

/**
 * _islower(int c) - checks for lowercase character.
 */
int _islower(int c)
{
	char small;

	for(small = 'a'; small <= 'z'; small++)
	{
		if(small == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
