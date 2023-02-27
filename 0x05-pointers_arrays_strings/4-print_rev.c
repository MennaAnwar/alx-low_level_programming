#include "main.h"

/**
 * print_rev - print a string in reverse.
 *@s: the string to print in reverse.
 */
void print_rev(char *s)
{
	int i;

	i = sizeof(s) - 1;
	while (i >= 0)
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
