#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: integer
  **/

int main(int argc, char *argv[])
{
	int num_bytes, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == (num_bytes - 1))
		{
			continue;
		}

		printf(" ");

		i++;
	}

	printf("\n");
	return (0);
}
