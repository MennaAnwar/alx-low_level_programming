#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;
	int a = 1;
	int b = a + 1;
	int c = a + b;

	printf("%d, %d, ", a, b);
	while (counter < 50)
	{
		printf("%d", c);
		counter++;
		a = b;
		b = c;
		c = a + b;
		if (counter < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
