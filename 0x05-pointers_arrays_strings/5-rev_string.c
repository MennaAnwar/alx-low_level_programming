#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, length;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i - 1;

	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length--] = tmp;
	}
}
