#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);

	if ((*cmp) != NULL && array != NULL)
	{
		for (x = 0; x < size; x++)
		{
			(*cmp)(array[x]);
			if ((*cmp)(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
