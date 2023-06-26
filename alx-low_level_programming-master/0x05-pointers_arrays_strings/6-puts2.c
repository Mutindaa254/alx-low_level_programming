#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every character of a string
 * @str: pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
			putchar (str[a]);
	}
	putchar ('\n');
}
