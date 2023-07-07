#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * nondigits - checks for non-digits
  * @number: input number
  * Return: integer
  **/

int nondigits(char *number)
{
	int i;

	for (i = 0; number[i] != '\0'; i++)
	{
		if (!isdigit(number[i]))
		{
			return (1);
		}
	}
	return (0);
}

/**
  * main - prints the number of arguments passed into it
  * @argc: argument count
  * @argv: argument vector
  * Return: 0, on success
  **/

int main(int argc, char **argv)
{
	int sum, i;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			if (nondigits(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
}
