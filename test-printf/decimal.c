#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * print_digit - prints a decimal or integer
  * @num: number to be printed
  * Return: count
  **/

int print_digit(int num)
{
	int count;
	char buffer[20]; /* adjustable buffer size */

	count = sprintf(buffer, "%d", num); /* converting integer to string */

	return (write(1, buffer, count));
}
