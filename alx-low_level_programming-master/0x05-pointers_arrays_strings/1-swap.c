#include "main.h"

/**
 * swap_int - swap the value of two int a and b
 * @a: a pointer
 * @b: a pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
