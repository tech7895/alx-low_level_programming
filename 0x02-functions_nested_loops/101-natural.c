#include <stdio.h>
/**
 * main - This program list all the natural numbers below 10
 * that are multiples of 3 or 5
 * Return: (0)
 */
int main(void)
{
	int a, sum = 0;

	for (a = 0; a < 1024; a++)
	{
		if ((a % 5 == 0) || (a % 3 == 0))
			sum += a;
	}
	printf("%d\n", sum);
	return (0);
}
