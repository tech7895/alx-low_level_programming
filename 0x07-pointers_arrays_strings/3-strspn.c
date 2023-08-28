#include "main.h"
/**
 * int _strspn - This function gets the length of a prefix substring
 * @s: the string
 * @accept: bytes
 *
 * Return: n
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int n = 0;


	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				n++;
				break;
			}
			else if (accept[a + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

