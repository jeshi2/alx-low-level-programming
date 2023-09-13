#include "search_algos.h"

/**
 * jump_search - searches for values in a sorted array using jump_search
 * @array: pointer to the first elmeent of the array to search in
 * @size: number of element in the array
 * @value: the value ot search for
 * Return: the index where the value is located, or -1 if not
 * found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t left = 0, right = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	/*do jump search*/
	for (; right < size && array[right] < value; left = right, right += step)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	/*do linear search*/
	for (i = left; i < size && i <= right; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
