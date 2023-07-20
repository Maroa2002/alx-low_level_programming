#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
  * struct dt - structure
  * @letter: letter smbol for datatype
  * @fuunc: function pointer
  **/

typedef struct dt
{
	char letter;
	void (*func)(va_list);
} datatype;

#endif
