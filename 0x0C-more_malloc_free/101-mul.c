#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * multiply - multiplies two numbers
  * @num1: first number
  * @num2: second number
  * Return: integer
  **/

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
  * validate_arguments - validating passed arguments
  * @argc: argument count
  * @argv: argument vector
  * @num1: pointer to an array
  * @num2: second pointer to an array
  * Return: pointer to an array
  **/

int validate_arguments(int argc, char *argv[], int *num1, int *num2)
{
	char *endptr;

	if (argc != 3)
	{
		print("Error\n");
		return (98);
	}
	*num1 = strtol(argv[1], &endptr, 10);
	if (*endptr != '\0' || !isdigit(*argv[1]))
	{
		printf("Error\n");
		return (98);
	}

	*num2 = strtol(argv[2], &endptr, 10);
	if (*endptr != '\0' || !isdigit(*argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	return (0);
}
