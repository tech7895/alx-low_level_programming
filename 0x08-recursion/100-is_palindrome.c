#include "main.h"

/**
 * _strlen_recursion - This function gets the string length
 *
 * @s: the string
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - This compares each character of the string
 * @s: the string
 * @left: left
 * @right: right
 * Return: 0
 *
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}
/**
 * is_palindrome - This function returns 1 if a string is
 * a palindrome and 0 if not
 *
 * @s: the string to test
 *
 * Return: 1 if it is a pali...., 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
