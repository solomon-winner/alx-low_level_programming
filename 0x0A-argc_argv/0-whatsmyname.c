#include <stdio.h>
#include "main.h"

/**
 * main -  prints its name, followed by a new line
 * @argc: size of the argument
 * @argv: Aray of the argument
 * Return: zero
 */
int main(int argc__attribute__((unused)),char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
