#include "main.h"

/**
 * print_alphabet_x10 -  function should reter
 */
void print_alphabet_x10(void)
{
	int iterator;
	char c;

	for (iterator = 0 ; iterator < 10; iterator++)
	{
		for (c = 'a' ; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
