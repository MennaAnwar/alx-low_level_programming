#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;

	num = 0;
	letter = 'a';
	while (num < 10)
		putchar((num++ % 10) + '0');

	while (letter <= 'f')
		putchar(letter++);

	putchar('\n');

	return (0);
}
