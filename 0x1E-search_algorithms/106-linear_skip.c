#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a sorted skip
 * list of integers.
 * @list: A pointer to the  head of the linked list to search
 * @value: The value to search for
 *
 * Return: a pointer on the first node where value is located or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *l, *r;

	if (list == NULL)
		return (NULL);

	for (l = r = list; r->next != NULL && r->n < value;)
	{
		l = r;
		if (r->express != NULL)
		{
			r = r->express;
			printf("Value checked at index [%ld] = [%d]\n",
			       r->index, r->n);
		}
		else
		{
			while(r->next != NULL)
				r = r->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	       l->index, r->index);

	for (; l->index < r->index && l->n < value; l = l->next)
		printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);
	printf("Value checked at index [%ld] = [%d]\n", l->index, l->n);

	return (l->n == value ? l : NULL);
}
