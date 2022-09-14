#include "main.h"

/**
 * times_table: is the function name*
 *
 */
void times_table(void)
{
	int row, column;

	for (row = 0 ; row <= 9; row++)
	{
		for (column = 0; column <= 9; column++)
		{
			_putchar((row * column) / 10 + '0');
			_putchar((row * column) % 10 + '0');
			if (row == 9 && column == 9)
				break;
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
