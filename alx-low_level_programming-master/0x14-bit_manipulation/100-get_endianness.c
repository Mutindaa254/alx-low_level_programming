#include "main.h"

/**
 * get_endianness - Checks the endianness
 * Return: big - 0 little - 1
 */

int get_endianness(void)
{
	int size = 1;
	char *endianes = (char *)&size;

	if (*endianes == 1)
		return (1);

	return (0);
}
