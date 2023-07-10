#include "main.h"
#include <stdlib.h>

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
	strcp = malloc(sizeof(*str));
	if (strcp == NULL)
	{
		return (NULL);
	}
	else
	{
		strcp = str;
		return (strcp);
	}
	free(strcp);
}

