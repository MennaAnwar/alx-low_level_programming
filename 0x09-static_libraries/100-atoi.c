#include "main.h"
#include "2-strlen.c"

/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		while (*temp >= '0' && *temp <= '9')
		{
			num = num * 10 + (*temp - '0');
			temp++;
		}
	}
	return (num * sign);
}
