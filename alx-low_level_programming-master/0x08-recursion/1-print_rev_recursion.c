#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - This is the main function
 * @s: This is the string entered
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
