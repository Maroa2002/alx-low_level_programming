#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory,
  * which contains a copy of the string given as a parameter
  * @str: parameter string
  * Return: NULL, is str=NULL
  * pointer on success
  **/

char *_strdup(char *str)
{
	char *strcp;

	if (str == NULL)
	{
		return (NULL);
	}

	strcp = malloc((sizeof(*str) * strlen(str)) + 1);
	if (strcp == NULL)
	{
		return (NULL);
	}

	strcpy(strcp, str);

	return (strcp);
}

