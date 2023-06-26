#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - Prints a char.
 * @arg: A list of arguments
 */
void print_char(va_list arg)
{
	char names;

	names = va_arg(arg, int);
	printf("%c", names);
}

/**
 * print_int - Prints an int
 * @arg: A list of arguments
 */
void print_int(va_list arg)
{
	int numbr;

	numbr = va_arg(arg, int);
	printf("%d", numbr);
}

/**
 * print_float - Prints a float
 * @arg: A list of arguments
 */
void print_float(va_list arg)
{
	float numbr;

	numbr = va_arg(arg, double);
	printf("%f", numbr);
}

/**
 * print_string - Prints a string
 * @arg: A list of arguments
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - Prints anything
 * @format: A string of characters
 * @...: A variable number of arguments
 *
 * Description: Any argument
 */
void print_all(const char * const format, ...)
{
	va_list count;
	int x = 0, y = 0;
	char *sep = "";
	printer_t funcs[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(count, format);

	while (format && (*(format + x)))
	{
		y = 0;

		while (y < 4 && (*(format + x) != *(funcs[y].symbol)))
			y++;

		if (y < 4)
		{
			printf("%s", sep);
			funcs[y].print(count);
			sep = ", ";
		}

		x++;
	}

	printf("\n");

	va_end(count);
}
