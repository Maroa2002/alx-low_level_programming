#include <ctype.h>
#include "main.h"

/**
  * _isalpha - checks for alphabetic character
  * @c: character to be checked
  *
  * Return: On success 1
  * On error, 0
  **/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
		return (0);
}


