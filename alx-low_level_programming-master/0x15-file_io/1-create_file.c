#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file
 *
 * Return: function fails -1 else 1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wte, length = 0;

	if (filename == NULL)
		return (0);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wte = write(opn, text_content, length);

	if (opn == -1 || wte == -1)
		return (-1);

	close(opn);

	return (1);
}
