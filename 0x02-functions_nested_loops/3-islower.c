#include "main.h"

/**
 * _islower(int c) - checks for lowercase character.
 */
int _islower(int c)
{
	char small;
	int R;

	for(small = 'a'; small <= 'z'; small++)
	{
		if(small == c)
		{
			R = 1;
		}
		else
		{
			R = 0;
		}
	}
	return (R);
}
