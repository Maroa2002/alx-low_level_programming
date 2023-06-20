#include "main.h"

/**
  * print_sign - prints the sign of a number
  * @n: integer to be checked
  *
  * Return: if n is greater than 0 1.
  * if n is zero, 0 is returned, and -1 if n is less than zero
  * -1 if < 0
  **/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
		_putchar('-');
		return (-1);
}
