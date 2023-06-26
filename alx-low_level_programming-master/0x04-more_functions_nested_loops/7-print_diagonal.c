#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagnal line
 * @n: print int
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int b;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (b = 0; b < i; b++)
			{
				putchar (' ');
			}
			putchar (92);
			putchar ('\n');
		}
	}
	else
	{
		putchar ('\n');
	}
}
