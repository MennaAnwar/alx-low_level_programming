#include "main.h"
/**
 * binary_to_uint - binary to uint
 * @b: string to convert
 * Return: unsigned int
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;

	while (*b)
	{
		if (*b == '1')
			decimal = (decimal << 1) | 1;
		else if (*b == '0')
			decimal <<= 1;
		else
			return (0);
		b++;
	}
	return (decimal);
}
