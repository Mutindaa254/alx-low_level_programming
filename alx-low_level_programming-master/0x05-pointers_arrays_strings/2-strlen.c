#include "main.h"

/**
 * _strlen - lenght of a string
 * @s: a pointer
 *
 * Return: void
 */
int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
