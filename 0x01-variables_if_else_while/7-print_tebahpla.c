#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
		putchar(letter--);

	putchar('\n');

	return (0);
}
