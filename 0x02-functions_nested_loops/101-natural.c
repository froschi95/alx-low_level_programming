#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the sum of all multiples of 3 and 5 below 1024
* Return: 0 Always for Success
*/

int main(void)
{
	unsigned long int sum_3s, sum_5s, total;
	int n;

	sum_3s = sum_5s = total = 0;

	while (n < 1024)
	{
		if (n % 3 == 0)
		{
			sum_3s = sum_3s + n;
		}
		else if (n % 5 == 0)
		{
			sum_5s = sum_5s + n;
		}
		n++;
	}
	total = sum_3s + sum_5s;
	printf("%lu\n", total);
	return (0);
}
