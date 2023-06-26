#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function
 * @array: pointer to a name
 * @size: size of the array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if ((*action) != NULL && array != NULL)
		for (x = 0; x < size; x++)
			(*action)(array[x]);
}
