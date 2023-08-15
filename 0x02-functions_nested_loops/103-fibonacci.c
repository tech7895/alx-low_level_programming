#include <stdio.h>
/**
 * main - This program sum up
 * even fibonacci up to 4 million
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, x = 1, y = 2, sum = 0, tsum = 0;

	for (i = 0; i < 49; i++)
	{
		if ((y % 2 == 0) && (y <= 4000000))
		{
			tsum = tsum + y;
		}
		sum = x + y;
		x = y;
		y = sum;
	}
	printf("%ld\n", tsum);

	return (0);
}
