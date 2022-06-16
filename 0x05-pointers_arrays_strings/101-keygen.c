#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates keygen.
 * Return: 0 Always.
 */

int main(void)
{
	int n = 0, k = 0;
	time_t t;

	srand((unsigned int) time(&t));
	while (k < 2772)
	{
		n = rand() % 128;
		if ((k + n) > 2772)
			break;
		k = k + n;
		printf("%c", n);
	}
	printf("%c\n", (2772 - k));
	return (0);
}
