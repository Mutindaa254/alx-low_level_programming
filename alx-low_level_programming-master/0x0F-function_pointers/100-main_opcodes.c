#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the opcodes
 * @argc: The number of argument
 * @argv: An array of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int outpt, set;
	int (*address)(int, char **) = main;
	unsigned char opcodes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	outpt = atoi(argv[1]);

	if (outpt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (set = 0; set < outpt; set++)
	{
		opcodes = *(unsigned char *)address;
		printf("%.2x", opcodes);

		if (set == outpt - 1)
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
