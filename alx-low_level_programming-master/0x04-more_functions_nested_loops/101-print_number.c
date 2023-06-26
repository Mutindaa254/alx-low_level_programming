#include "main.h"
#include <stdio.h>

/**
 * print_number - prints int with putchar
 * @n: takes number, hello
 * Return: 0
 */
void print_number(int n)
{
	int i, j;

	if (n > 0)
		for (i = n; i > 0; i--)
		{
			for (j = 1; j <= n; j++)
				if (j >= i)
					putchar('#');
				else
					putchar(' ');
			putchar('\n');
		}
	else
		putchar('\n');
}
