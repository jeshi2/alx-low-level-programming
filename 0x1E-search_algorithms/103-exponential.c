#include "search_algos.h"

/**
 * exponential_search - searches for values in sorted array using
 * exponential followed by binary serach
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: The value to search for
 * Return: the index where the vaue is located or -1 if not found
 * or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t left = 0, right, mid;
	size_t i;

	if (array == NULL)
		return (-1);
	
	if (size == 0)
		return (-1);
	right = 1;
	while (right < size && array[right] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right *= 2;
	}

	if (right >= size)
		right = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[right]);
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
