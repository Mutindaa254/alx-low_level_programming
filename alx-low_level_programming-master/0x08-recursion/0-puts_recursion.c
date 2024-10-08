#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - This is the main function
 * @s: This is the string that has been entered
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
