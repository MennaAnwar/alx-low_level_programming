#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: pointer to the string to print
 */
void _puts(char *str)
{
	int i;

	i = str.length()-1;
	while (i >= 0)
	{
		_putchar(str[i--]);
	}
	_putchar('\n');
}
