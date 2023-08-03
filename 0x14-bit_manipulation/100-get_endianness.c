#include "main.h"

/**
  * get_endianness - checks for big or small endian
  * If the first byte (lowest address) is 1,
  * it's little endian (LSB first).If last byte (highest address) is 1
  * , it's big endian (MSB first).
  * Return: 0 if big endian, 1 if little endian
  **/

int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;

	return ((int)(*ptr));
}
