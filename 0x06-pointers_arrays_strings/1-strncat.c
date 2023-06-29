#include <string.h>
#include "main.h"

/**
  * *_strncat - concatenates two strings using strncat()
  * @dest: destination
  * @src: source
  * @n: nnumber of characters
  *
  * Return: pointer to a string
  **/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
