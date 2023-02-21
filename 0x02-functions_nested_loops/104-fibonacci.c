#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 0;
	long int a = 1;
	long int b = a + 1;
	long int c = a + b;

	while (c < 98)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
