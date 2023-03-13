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
	int c = 0;
	int x;
	int y;
	int z;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			c++;
	}

	c = c + ac + 1;

	s = malloc(sizeof(char) * c);

	if (s == NULL)
		return (NULL);

	x = 0;

	while (x < ac)
	{
		y = 0;

		while (av [x][y] != '\0')
		{
			s[z] = av[x][y];
			z++;
			y++;
		}
		s[z] = '\n';
		z++;
		x++;
	}

	return (s);
}
