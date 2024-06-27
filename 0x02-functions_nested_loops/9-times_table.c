#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0'); /* print the first column (0 times table) */
		_putchar(',');
		_putchar(' ');

		for (column = 1; column <= 9; column++)
		{
			product = row * column;

			if (product <= 9)
				_putchar(' '); /* add space for alignment */
			else
				_putchar((product / 10) + '0'); /* print tens digit */

			_putchar((product % 10) + '0'); /* print ones digit */

			if (column < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
