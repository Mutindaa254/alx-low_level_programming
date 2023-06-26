#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: pointer to the separator
 * @n: const unsigned int
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list count;
	unsigned int i;

	va_start(count, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(count, int));
		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}
