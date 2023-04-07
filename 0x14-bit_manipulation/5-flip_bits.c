#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_xor_m = n ^ m, flip_bits = 0;

	while (n_xor_m > 0)
	{
		flip_bits++;
		n_xor_m &= n_xor_m - 1;
	}

	return (flip_bits);
}
