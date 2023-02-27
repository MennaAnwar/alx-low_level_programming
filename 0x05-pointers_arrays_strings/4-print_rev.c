#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 *
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
