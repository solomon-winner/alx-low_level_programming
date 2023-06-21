#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints calculator result
 * @argc: ... ...
 * @argv: an Array
 * Return: ... ...
 */

int main(int argc, char **argv)
{
	int (*operator)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get_op_func(argv[2]);
	if (!operator)
		printf("Error\n"), exit(99);
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);
	printf("%d\n", operator(a, b));
	return (0);
}
