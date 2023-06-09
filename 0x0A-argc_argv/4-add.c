#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int q, w, len, sm;
	char *pr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sm = 0;
		for (q = 1; q < argc; q++)
		{
			pr = argv[q];
			len = strlen(pr);
			w = 0;

			while (w < len)
			{
				if (isdigit(*(pr + w)) == 0)
				{
					printf("Error\n");
					return (1);
				}
				w++;
			}
			sm += atoi(argv[q]);
		}
		printf("%d\n", sm);
	}
	return (0);
}
