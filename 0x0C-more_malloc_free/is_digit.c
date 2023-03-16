#include "main.h"
/**
 * _isdigit - determine if digit
 *
 * @c: character to determine
 *
 * Return: gives boolean
 */
int is_digit(char *c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
