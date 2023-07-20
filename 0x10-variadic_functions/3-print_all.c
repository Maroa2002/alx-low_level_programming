#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
  * print_int - prints integer
  * @list: argument list
  **/
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
  * print_char - prints character
  * @list: data list
  **/
void print_char(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
  * print_str - prints string
  * @list: argument list
  **/
void print_str(va_list list)
{
	char *str = va_arg(list, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
  * print_float - prints floats
  * @list: argument list
  **/
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
  * print_all - prints anything
  * @format: list of argument types
  * @...: unnamed arguments
  * Return: void
  **/

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *separator = "";
	va_list list;

	datatype storage[] = {{'c', print_char},
				{'i', print_int},
				{'f', print_float},
				{'s', print_str},
				{'\0', NULL}};
	va_start(list, format);
	while (format != NULL && format[j] != '\0')
	{
		while (storage[i].letter != '\0')
		{
			if (storage[i].letter == format[j])
			{
				printf("%s", separator);
				storage[i].func(list);
				separator = ", ";
			}
			i++;
		}
		i = 0;
		j++;
	}
	printf("\n");

	va_end(list);
}
