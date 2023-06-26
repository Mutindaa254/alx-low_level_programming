#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i;
	int first_number;
	int second_number;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
		while (result <= 14)
		{
			if (result < 10)
			{
				second_number = result;
			}
			else
			{
				first_number = result / 10;
				second_number = result % 10;
				putchar (first_number + '0');
			}

			putchar (second_number + '0');

			result++;
		}
		i++;
		result = 0;
		putchar ('\n');
	}
}
