#include "main.h"

/**
 * get_endianness - This function checks the endianness
 *
 * Return: little_big
 *
 */
int get_endianness(void)
{
	int little_big, x = 1;

	little_big = (int) (((char *)&x)[0]);

	return (little_big);
}
