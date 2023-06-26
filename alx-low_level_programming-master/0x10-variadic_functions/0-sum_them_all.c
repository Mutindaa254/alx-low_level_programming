#include "variadic_functions.h"

/**
 * sum_them_all - the function prototype
 * @n: unsigned integer n
 * Return: total sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int count = 0;
	unsigned int  x;
	va_list pointer;

	if (n == 0)
		return (0);

	va_start(pointer, n);
	for (x = 0; x < n; x++)
		count += va_arg(pointer, int);
	va_end(pointer);

	return (count);
}
