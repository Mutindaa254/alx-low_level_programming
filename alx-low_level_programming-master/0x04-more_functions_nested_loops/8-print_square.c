#include "main.h"
#include <stdio.h>

/**
 * print_square - prints square
 * @size: print size
 * Return: 0
 */
void print_square(int size)
{
	int i;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				putchar (35);
			}
			putchar ('\n');
		}
	}
	else
	{
		putchar ('\n');
	}
}
