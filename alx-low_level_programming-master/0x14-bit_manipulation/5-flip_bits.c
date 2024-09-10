#include "main.h"

/**
 * flip_bits - Counts the number of bits
 * @n: The number
 * @m: The number to flip n to
 * Return: The necessary number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits = 0;

	for (xor = n ^ m; xor > 0; xor >>= 1)
	{
		bits += (xor & 1);
	}
	return (bits);
}
