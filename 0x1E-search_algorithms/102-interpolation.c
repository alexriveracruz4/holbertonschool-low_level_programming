#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 in failure
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t i, l, h;

	if (array == NULL)
		return (-1);

	for (l = 0, h = size - 1; h >= l;)
	{
		m = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (m < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}
		if (array[m] == value)
			return (m);
		if (array[m] > value)
			h = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}
