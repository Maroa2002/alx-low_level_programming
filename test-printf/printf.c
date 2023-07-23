#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_char - prints a character
  * @c: character
  * Return: count
  **/
int print_char(int c)
{
	return (write(1, &c, 1));
}

/**
  * print_str - prints a string
  * @str: string
  * Return: count
  **/
int print_str(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		print_char((int)*str);
		++count;
		++str;
	}
	return (count);
}

/**
  * print_format - checks for the format
  * @specifier: format specifier
  * @ap: argument pointer
  * Return: count
  **/
int print_format(char specifier, va_list ap)
{
	int count;

	count = 0;
	if (specifier == 'c')
	{
		count += print_char(va_arg(ap, int)); /* type promotion of char to int */
	}
	else if (specifier == 's')
	{
		count += print_str(va_arg(ap, char *));
	}
	else if (specifier == '%')
	{
		count += write(1, "%", 1);
	}

	return (count);
}

/**
  * _printf - custom printf function
  * @format: format character string
  * @...: variable arguments
  * Return: no of characters printed
  **/
int _printf(const char *format, ...)
{
	int count; /* number of printed characters */
	va_list ap;

	if (format == NULL) /* no format specifier parsed */
	{
		return (-1);
	}

	va_start(ap, format);
	count = 0;

	while (*format != '\0') /* similar to format[i] */
	{
		if (*format == '%')
		{
			count += print_format(*(++format), ap); /* next character after % */
		}
		else /* normal character */
		{
			count += write(1, format, 1);
		}
		++format; /* similat to ++i */
	}

	va_end(ap);

	return (count);
}

