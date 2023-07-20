#include <stdarg.h> /* handling variadic function arguments */
#include <stdio.h>

/**
  * add - 
  * @count: count of remaining arguments
  * @...: remaining arguments
  * Return: integer sum
  **/

int add(int count, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, count); /* initializing argument list */

	sum = 0;
	for (i = 0;i < count; i++)
	{
		sum += va_arg(ap, int); /* yields the next argument */
	}

	va_end(ap); /* cleans up before the function returns */
	
	return (sum);
}

int main(void)
{
	printf("%d\n", add(3, 5, 6, 7, 9));
	printf("%d\n", add(10, 11, 23, 56));

	return (0);
}


