#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 * add extra space past single digit
 */
void times_table(void)
{
	int row, col, d;

	row = 0;
	while (row <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		col = 0;
		while (col <= 9)
		{
			d = (row * col);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (col < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}

}
