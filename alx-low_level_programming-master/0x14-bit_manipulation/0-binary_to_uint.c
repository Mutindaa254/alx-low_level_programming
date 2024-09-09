#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - function that converts
 * @b: is pointing to a string of 0 and 1 chars
 * Return: unsigned integer, converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int change = 0, total = 0;
	int i, len = 0;

	if (b == NULL)
		return (0);

	len = _strlen(b);
	i = 0;

	while (b[i] != '\0')
	{
		if ((b[i] != '0' && b[i] != '1'))
			return (0);
		change = (b[i] - 48) * _pow_recursion(2, (len - 1) - i);
		total += change;
		i++;
	}
	return (total);
}

/**
 * _strlen - function that returns the length of a string
 * @s: parameter defined in main
 * Return: length of string
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}

/**
 * _pow_recursion - function that returns x raised to the power of y
 * @x: parameter defined in main, integer
 * @y: parameter defined in main, exponent
 *
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
