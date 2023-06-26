#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers
 *
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	for (i = 0; i < 10; i++)
	putchar (i + '0');
	putchar ('\n');
}
