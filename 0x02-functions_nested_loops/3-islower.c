#include <ctype.h>
#include "main.h"

/**
  * _islower - checks for lowercase character
  *
  * Return: Always 1 (if lowercase), 0 (otherwise)
  **/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	} else
	{
		return (0);
	}
}
