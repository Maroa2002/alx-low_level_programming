#include "main.h"

/**
  * factorial - returns the factoriaal of a given number
  * @n: given number
  * Return: integer
  **/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
