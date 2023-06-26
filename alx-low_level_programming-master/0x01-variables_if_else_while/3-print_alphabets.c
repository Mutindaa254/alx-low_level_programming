#include <stdio.h>

/**
 *main - prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int chr;

	for (chr = 'a'; chr <= 'z'; chr++)
		putchar(chr);
	for (chr = 'A'; chr <= 'Z'; chr++)
		putchar(chr);
	putchar('\n');
	return (0);
}
