#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n++);
	}
	_putchar('\n');
}
