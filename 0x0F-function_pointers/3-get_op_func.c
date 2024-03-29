#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
  * get_op_func - selects the correct function
  * @s: operator passed by the argument
  *
  * Return: zero
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};
	int counter = 0;

	while (counter < 5)
	{
		if (strcmp(s, ops[counter].op) == 0)
			return (ops[counter].f);
		counter++;
	}

	return (0);
}
