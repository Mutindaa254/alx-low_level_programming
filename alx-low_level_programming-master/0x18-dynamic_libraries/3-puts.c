#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: a pointer
 * Return: void
 */
void _puts(char *str)
{
	char *c;
	int m;

	c = str;

	for (m = 0; c[m]; m++)
	{
		putchar (c[m]);
	}
	putchar ('\n');
}
