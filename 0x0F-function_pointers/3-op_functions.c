#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - operates Addition
  * @a: operand
  * @b: operand
  *
  * Return: the sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - operates substraction
  * @a: operand
  * @b: operand
  *
  * Return:the difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - operates multiplication
  * @a: operand
  * @b: operand
  *
  * Return: the product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - operates division
  * @a: operand
  * @b: operand
  * Return: quotient
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - ...
  * @a: ...
  * @b: ...
  *
  * Return: ...
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
