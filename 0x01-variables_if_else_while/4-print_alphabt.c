#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z' && letter != 'e' && letter != 'q')
	{
		putchar(letter++);
	}

	putchar('\n');

	return (0);
}
