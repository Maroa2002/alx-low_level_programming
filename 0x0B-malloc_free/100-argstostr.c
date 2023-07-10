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
	int i;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(char *) * ac);
	if (str == NULL)
	{
		return (NULL);
	}

	str = av[0];
	for (i = 1; i < ac; i++)
	{
		strcat(str, av[i]);
	}

	return (str);
}

