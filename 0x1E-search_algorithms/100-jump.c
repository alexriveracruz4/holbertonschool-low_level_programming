#include "search_algos.h"
#include <math.h>

/**
 * min_value - find the minimum of two values
 * @a: first value
 * @b: second value
 *
 * Return: minimum value
 */
size_t min_value(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}


/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located or -1 in failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);

	while (array[min_value(step, size)] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev < size)
			printf("Value checked array[%lu] = [%i]\n",
			       prev, array[prev]);
		else
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
			       prev - (long unsigned)sqrt(size), prev);
			prev -= (long unsigned)sqrt(size);
			while (prev < size)
			{
				printf("Value checked array[%lu] = [%i]\n",
				       prev, array[prev]);
				prev++;
			}
			return (-1);
		}
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev, prev + (long unsigned)sqrt(size));

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		prev++;
		if (prev > min_value(step, size))
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%i]\n", prev, array[prev]);
		return (prev);
	}

	return (-1);
}
