#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program generates random passwords for 101-crackme,
 *
 * Return: Always 0 (Success)
**/
int main(void)
{
	int a;
	char c;

	srand(time(NULL));
	a = 0;
	while (a <= 2645)
	{
		c = rand() % 128;
		a += c;
		putchar(c);
	}
	putchar(2772 - a);

	return (0);
}

