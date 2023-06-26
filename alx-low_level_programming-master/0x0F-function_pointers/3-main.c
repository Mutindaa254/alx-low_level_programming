#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result
 *
 * @argc: count
 * @argv: arguments passed
 *
 * Return: result
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;
	int calculate;
	int (*ptr)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);
	if (argv[2][1] != '\0')
		printf("Error\n"), exit(99);

	ptr = get_op_func(argv[2]);
	if (ptr != NULL)
	{
		number1 = atoi(argv[1]);
		number2 = atoi(argv[3]);
		calculate = (*ptr)(number1, number2);
		printf("%d\n", calculate);
	}
	else
		printf("Error\n"), exit(99);
	return (0);
}
