#include "search_algos.h"

/**
 * advanced_binary_recursive - recurisive helper fundtion
 * @array: pointer to the first element of the array
 * @left: left index of the subarray
 * @right: right index of the dubarray
 * @value: the value to search for
 * Return: the index where the value is located, or -1
 * if not found
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t middle;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (middle = left; middle < right; middle++)
		printf("%d, ", array[middle]);
	printf("%d\n", array[middle]);

	middle = left + (right - left) / 2;
	if (array[middle] == value && (middle == left || array[middle - 1] != value))
		return (middle);
	if (array[middle] >= value)
		return (advanced_binary_recursive(array, left, middle, value));
	return (advanced_binary_recursive(array, middle + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index where the value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
        	return (-1);

    	return advanced_binary_recursive(array, 0, size - 1, value);
}
