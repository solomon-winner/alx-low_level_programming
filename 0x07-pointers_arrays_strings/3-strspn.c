#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: the number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int number = 0, Sizex,Sizey;

	for (Sizex = 0; s[Sizex] != '\0'; Sizex++)
	{
		if (s[Sizex] != 32)
		{
			for (Sizey = 0; accept[Sizey] != '\0'; Sizey++)
			{
				if (s[Sizex] == accept[Sizey])
					number++;
			}
		}
		else
			return (number);
	}
		return (number);

}
