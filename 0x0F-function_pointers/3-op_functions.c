#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - This adds two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This subtracts two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - This multiplies two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This divides two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - This computes the modulo of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
