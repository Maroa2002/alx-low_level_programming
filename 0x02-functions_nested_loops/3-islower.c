#include <ctype.h>
#include "main.h"

/**
  * _islower - checks for lowercase character
  *
  * @c: The character to be checked
  * Return: On Success 1.
  * On error, 0 is returned
  **/

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
		return (0);
}
