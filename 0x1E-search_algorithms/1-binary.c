#include "search_algos.h"

/**
 * binary_search - This function searches for array value in array sorted array
 * of integers using Binary search algorithm.
 * @array: the the pointer to the first element of the array to search in.
 * @size: number of elements in array.
 * @value: value to search for.
 *
 * You can assume that value won’t appear more than once in array.
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: the index where value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

/**
 * binary_search_index - recursive function for helping binary_search.
 * @array: the the pointer to the first element of the array to search in.
 * @l: left index of array.
 * @r: right index of array.
 * @value: value to look for.
 *
 * You can assume that value won’t appear more than once in array.
 * If value is not present in array or if array is NULL return -1.
 *
 * Return: the index where value is located.
 */
int binary_search_index(int *array, size_t l, size_t r, int value)
{
	int md;

	/* if l is ever > r, it means the element is not in the array */
	if (!array || l > r)
		return (-1);
	print_array(array, l, r);

	/* find the md-way index between index l and index r */
	md = l + (r - l) / 2;

	if (l == r)
		return (*(array + md) == value ? (int)md : -1);

	/* if we've found the element at the md-way index, return the index */
	if (array[md] == value)
		return (md);
	/**
	 * else if the element MUST be in the left-portion of the portion of the
	 * array we are currently looking at, search for it in this portion
	 */
	else if (array[md] > value)
		return (binary_search_index(array, l, md - 1, value));
	/**
	 * else if the element MUST be in the right-portion of the portion of the
	 * array we are currently looking at, search for it in this portion
	 */
	else
		return (binary_search_index(array, md + 1, r, value));
}

/**
 * print_array - Prints an array of integers.
 * @array: The array to be printed.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	if (array)
	{
		printf("Searching in array: ");
		for (i = l; i < l + (r - l + 1); i++)
			printf("%d%s", *(array + i), i < l + (r - l) ? ", " : "\n");
	}
}
