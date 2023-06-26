#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers
 *
 * Return: 0
 */
void print_most_numbers(void)
{
int i;

i = 0;
while (i < 10)
{
if (i != 2 && i != 4)
{
putchar(i + '0');
}
i++;
}

putchar ('\n');
}
