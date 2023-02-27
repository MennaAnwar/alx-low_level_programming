#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;

	while (s[i] != 0)
	{
		i++;
	}

	j = i - 1;
	i = 0;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
