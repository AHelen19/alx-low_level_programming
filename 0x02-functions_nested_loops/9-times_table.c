#include "main.h"

/**
 * times_table - is the function name*
 *
 */
void times_table(void)
{
	int row, column, prod;

	for (row = 0 ; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			prod = row * column;

			if (prod >= 10)
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				_putchar(prod + '0');
			}
			if (column == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
