#include <stdio.h>

int main(void)
{
	int num, sum;
	num = 1;
	sum = 0;
	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum = sum + num;
		num--;
	}
	
	printf("%d\n", sum);

	return (0);
}
