#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers
  * @separator: string between numbers
  * @n: count of remaining arguments
  * @...: remaining integers
  * Return: nothing
  **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list num_list;

	va_start(num_list, n);
	if (separator == NULL)
	{
		separator = "";
	}

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(num_list, int));

		if (index < (n - 1))
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(num_list);
}
