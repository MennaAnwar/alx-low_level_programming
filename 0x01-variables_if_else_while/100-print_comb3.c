#include <stdio.h>

/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{

	for (int i = 1; i < 90; i++)
	{
		if (i < 10)
			putchar('0' + i);
		else
			putchar(i);

		if (i != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
