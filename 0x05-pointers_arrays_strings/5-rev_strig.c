#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i;

	i = s.length() - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
