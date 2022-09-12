
#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *      and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0.
 */
int main(void)
{
	int digit1, digit2, digit3, digit4;

	for (digit1 = 0; digit1 < 10; digit1++)
	{
		for (digit2 = 0; digit2 < 10; digit2++)
		{
			for (digit3 = 0; digit3 < 10; digit3++)
			{
				for (digit4 = digit3 + 1; digit4 < 10; digit4++)
				{
					putchar((digit1 % 10) + '0');
					putchar((digit2 % 10) + '0');
					putchar(' ');
					putchar((digit3 % 10) + '0');
					putchar((digit4 % 10) + '0');
					if (digit1 == 9 && digit2 == 8 && digit3 == 9 && digit4 == 9)
					break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
