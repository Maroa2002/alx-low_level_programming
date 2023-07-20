#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings
  * @separator: printed between strings
  * @n: count of passed arguments
  * @...: unnamed arguments
  * Return: nothing
  **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string_list;

	va_start(string_list, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(string_list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string_list);
}
