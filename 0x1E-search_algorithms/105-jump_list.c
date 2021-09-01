#include "search_algos.h"
#include <math.h>

/**
 * jump_list - function that searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: a pointer to the first node where value is located or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *l, *r;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (l = r = list; r->index + 1 < size && r->n < value;)
	{
		l = r;
		for (step += step_size; r->index < step; r = r->next)
		{
			if (r->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", r->index, r->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
	       l->index, r->index);

	for (; l->index < r->index && l->n < value; l = l->next)
		printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);
	printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);

	return (l->n == value ? l : NULL);
}
