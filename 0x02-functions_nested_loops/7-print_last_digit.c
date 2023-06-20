#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  *
  * Returns: Returns an integer value
  **/

int print_last_digit(int number)
{
	int result;
	
	result = number % 10;
	_putchar(result + '0');
	_putchar('\n');

	return result;
}

