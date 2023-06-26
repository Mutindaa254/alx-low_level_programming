#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string in reverse order
 * @s: pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		putchar (s[i]);
	}
	putchar ('\n');
}
