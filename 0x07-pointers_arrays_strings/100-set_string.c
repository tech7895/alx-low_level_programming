#include "main.h"

/**
 * set_string - This function sets the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: char
 *
 * Return: void
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
