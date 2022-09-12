
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *      and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 100; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 100; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');
			if (digit1 == 98 && digit2 == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
