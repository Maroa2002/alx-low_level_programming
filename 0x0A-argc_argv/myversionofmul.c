#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: 0, on success
  **/

int main(int argc, char **argv)
{
	int product, i;

	if (argc > 1)
	{
		product = 1;

		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
