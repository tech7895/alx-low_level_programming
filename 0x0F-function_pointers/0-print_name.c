#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * print_name - This function prints name
 * @name: the name
 * @f: the function pointer
 *
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
