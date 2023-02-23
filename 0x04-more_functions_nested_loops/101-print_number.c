#include "main.h"

/**
 * print_number - prints number
 *
 * @n: integer to print to character
 */
void print_number(int n)
{
	int d;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	while (n != 0)
	{
		d = n % 10;
		n /= 10;
		_putchar(d);
	}
}
