#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * argstostr - concatenates all arguments of a program
  * @ac: argument count
  * @av: argument vector
  * Return: pointer to a string
  **/

char *argstostr(int ac, char **av)
{
	int i, j, str_index = 0;
	int length;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	/* total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]);
	}

	/* adding space for newline character and null terminator */
	length += (ac + 1);

	/* allocating memory for the concatenated string */
	str = malloc(sizeof(char) * length);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[str_index++] = av[i][j];
		}
		str[str_index++] = '\n';
	}
	str[str_index] = '\0'; /* null terminator */

	return (str);
}

