#include <ctype.h>
#include <string.h>
#include "main.h"

/**
  * *cap_string - capitalizes all words of a string
  * @str: string literal
  *
  * Return: string literal
  **/

char *cap_string(char *str)
{
	int i = 0;

	/* checks if the element is lowercase */
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	++i;

	while (str[i] != '\0') /* iterates through string */
	{

		/* if lowercase and prior char is separator, capitalize*/
		if ((str[i] >= 'a' && str[i] <= 'z')
		    && (str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == ' ' || str[i - 1] == '\t'
			|| str[i - 1] == '\n'))
			str[i] = str[i] - 'a' + 'A';
		i++;
	}

	return (str);
}


