#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 * using Binary search
 *
 * @array: pointer to the first element of the array to search in
 * @left: starting index of the [sub]array to search in
 * @right: ending index of the [sub]array to search in
 * @value: value to search for
 *
 * Return: index where the value is located,
 * otherwise -1 if value is not present or the array is NULL
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		if (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}


/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 * otherwise -1 if value is not present in array or if array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (index = 1; index < size && array[index] <= value;
		     index = index * 2)
			printf("Value checked array[%ld] = [%d]\n",
			       index, array[index]);
	}

	right = index < size ? index : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n",
	       index / 2, right);

	return (_binary_search(array, index / 2, right, value));
}
