#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * main - function that copies the content of a file
 * @ac: argument count
 * @av: arguments, file_from and file_to
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int poet_fowad, poet_to, rd_count, wte_count, close_stat;
	char buf[1024];
	char *file_from, *file_to;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = av[1];
	file_to = av[2];

	poet_fowad = open(file_from, O_RDONLY);
	if (poet_fowad == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				file_from), exit(98);
	poet_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (poet_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	rd_count = 1;
	while (rd_count != 0)
	{
		rd_count = read(poet_fowad, buf, 1024);
		if (rd_count == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					file_from), exit(98);
		buf[1024] = '\0';
		if (rd_count != 0)
		{
			wte_count = write(poet_to, buf, rd_count);
			if (wte_count == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		}
	}
	close_stat = close(poet_fowad);
	if (close_stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", poet_fowad), exit(100);
	if (close_stat == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", poet_to), exit(100);
	return (0);
}
