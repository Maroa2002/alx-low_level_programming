#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * is_digit - checks for non-digits
  * @number: input number
  * Return: integer
  **/

int is_digit(char *number)
{
	int i;

	for (i = 0; number[i] != '\0'; i++)
	{
		if (!(number[i] >= '0' && number[i] <= '9'))
		{
			return (0);
		}

	}
	return (1);
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
			if (is_digit(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
