#include "lists.h"

/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: pointer to head
 *
 * Return: The address of the node where the loop starts, or NULL if there
 * is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1, *node2;

	node2 = head;
	node1 = NULL;

	while (node2)
	{
		node1 = node2;
		node2 = node2->next;
		if (node1 < node2)
			return (node2);
	}

	return (NULL);
}
