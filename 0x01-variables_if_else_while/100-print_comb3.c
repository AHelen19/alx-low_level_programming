#include <stdio.h>

/**
 * main - Prints the last digit of a randomly generated number
 *
 *        and whether it is greater than 5, less than 6, or 0.
 * Return: Always 0.
 */



/* betty style doc for function main goes there */

int main(void)

{

	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			{
				if (i != j)
					if ((i * 10 + j) % 10 != 0)
					{
						putchar(i);
						putchar(j);
						putchar(',');
						putchar(' ');
					}
				else
					continue;
			}
	}
	return (0);

}
