#include <stdio.h>

/**
 * main - Prints all possible combinations of two different digits,
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	int i;

	for (i = 1; i < 90; i++)
=======
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
>>>>>>> 8053e1ec58ba128ba1fe90b17249a4a83c14c66f
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar((digit1 % 10) + '0');
			putchar((digit2 % 10) + '0');

			if (!(digit1 == 8 && digit2 == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
