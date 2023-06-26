#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it
 * @filename: pointer to the name of the file
 * @letters: The number of letters
 *
 * Return: function fails - 0 else actual number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wte;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wte = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wte == -1 || wte != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(opn);

	return (wte);
}
