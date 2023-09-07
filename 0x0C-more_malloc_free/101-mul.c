#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - This fuunction checks if a string contains a non-digit char
 * @s: the string
 *
 * Return: 0 or 1
 *
 */
int is_digit(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}

	return (1);
}

/**
 * _strlen - This function returns the length of a string
 * @s: the string
 *
 * Return: b
 */

int _strlen(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	return (b);
}

/**
 * errors - This function  handles errors for main
 *
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - This function multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int len1, len2, len;
	int b, carry;
	int digit1, digit2, *p, a = 0;
	char *s1, *s2;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1), len2 = _strlen(s2),	len = len1 + len2 + 1;
	p = malloc(sizeof(int) * len);
	if (!p)
		return (1);
	for (b = 0; b <= len1 + len2; b++)
		p[b] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += p[len1 + len2 + 1] + (digit1 * digit2);
			p[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			p[len1 + len2 + 1] += carry;
	}
	for (b = 0; b < len - 1; b++)
	{
		if (p[b])
			a = 1;
		if (a)
			_putchar(p[b] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(p);
	return (0);
}
