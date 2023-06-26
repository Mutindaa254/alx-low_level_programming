#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: pointer to the separator
 * @n: const unsigned int
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list count;
	char *ptr;
	unsigned int i;

	va_start(count, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(count, char *);
		printf("%s", ptr != NULL ? ptr : "(nil)");
		if (i != n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(count);
}
