#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.i
  * @r:integer to be checked
  *
  * Return: Returns an integer value
  **/

int print_last_digit(int r)
{
	int result;

	result = r % 10;
	if (result < 0)
		result *= -1;
	_putchar(result + 48);

	return (result);
}

