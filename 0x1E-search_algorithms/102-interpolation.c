#include "search_algos.h"

/**
 * interpolation_search - searches for values in sorted array
 * @array: pointer of the fisrt element of the array to search in
 * @size: number of element in the array
 * @value: the value to search for
 * Return: the index where the value is loacted, or -1 if not
 * found or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
			
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
