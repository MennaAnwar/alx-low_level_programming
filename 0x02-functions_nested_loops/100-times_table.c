#include "main.h"
/**
 * If n is greater than 15 or less than 0 the function should not print anything
 * Return: times table
 * add extra space past single digit
 */
void print_times_table(int n)
{
	int row, col, d;

	row = 0;
	if (n > 0 || n < 15)
	{
		while (row <= n)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			col = 1;
			while (col <= n)
			{
				d = (row * col);
				if ((d / 10) > 0)
					_putchar((d / 10) + '0');
				else
					_putchar(' ');
			
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
}
