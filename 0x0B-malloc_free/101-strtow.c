#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * strtow - splits a string into words
  * @str: input string to be split
  * Return: pointer to an array of strings
  * or, NULL on failure
  **/

char **strtow(char *str)
{
	char **words;
	int i, j = 0, k = 0, len, word_count = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			word_count++;
		}
	}
	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			if (k == 0)
			{
				words[j] = malloc(len * sizeof(char));
			}
			words[j][k] = str[i];
			k++;
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
			{
				words[j][k] = '\0';
				j++;
				k = 0;
			}
		}
	}
	words[word_count] = NULL;
	return (words);
}
