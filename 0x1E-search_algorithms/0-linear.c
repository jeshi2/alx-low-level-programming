#include "search_algos.h"

/**
 * linear_search - searches for a value in a array using linear_search
 * @array: pointer to the first element of the array to search in
 * @size: number of element in the array
 * @value: the value to search for
 * Return: the index where the value is located, or -1 if not found
 * or array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	/*check if array is NULL*/
	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/*compare current element with the target*/
		if (array[i] == value)
			return (i);
	}

	return (-i);
}
