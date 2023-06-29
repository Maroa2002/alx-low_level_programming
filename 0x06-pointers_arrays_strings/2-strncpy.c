#include <string.h>
#include "main.h"

/**
  * *_strncpy - copies a string using strncpy()
  * @dest: destination
  * @src: source
  * @n: number of characters to be copied
  *
  * Return: pointer to a string
  **/

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
