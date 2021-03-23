#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: pointer to pointer to head
 * @idx: index of the list where the new node should be added
 * @n: data to be added in the inserted node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1, *node2, *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	node2 = *head;
	node1 = malloc(sizeof(listint_t));
	if (node1 == NULL)
		return (NULL);
	for (i = 0; i < idx; i++)
	{
		node1 = node2;
		node2 = node2->next;
		if (node2 == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = node2;
	node1->next = new;
	return (new);
}