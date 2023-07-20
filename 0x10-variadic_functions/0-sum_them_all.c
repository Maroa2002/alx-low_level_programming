#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums its parameters
  * @n: count of remaining arguments
  * @...: remaining arguments
  * Return: integer sum
  **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list int_list;

	if (n == 0)
	{
		return (0);
	}

	va_start(int_list, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(int_list, int);
	}

	va_end(int_list);

	return (sum);
}
