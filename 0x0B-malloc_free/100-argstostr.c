#include "main.h"

/**
 * argstostr - concatenates all the arguments
 * @ac: parameter
 * @av: parameter
 * Return: char
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int c = 0, x = 0, y = 0, z = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (x < ac)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			c++;
			y++;
		}
		x++;
	}
	c = c + ac + 1;
	s = malloc(sizeof(char) * c);
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		s[z] = '\n';
		z++;
	}
	return (s);
}
