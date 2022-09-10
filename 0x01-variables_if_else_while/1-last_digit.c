#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Prints the last digit of a randomly generated numbe
 *        and whether it is greater than 5, less than 6, or 0.
 *
 *
 *
 * Return: Always 0.
 *
 */
int main(void)
{

		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		int length = 0;

		length = strlen(n);
		char lastDigit = n[length - 2];

		printf("Last digit of %d is %f and");
		if (lastDigit > 5)
			printf(" and is greater than 5\n");
		else if (lastDigit == 0)
			printf(" and is 0\n");
		else
			printf(" and is less than 6\n");
		return (0);
}
