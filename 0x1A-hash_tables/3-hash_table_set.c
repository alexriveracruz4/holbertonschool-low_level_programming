#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *value_2;
	unsigned long int idx;
	hash_node_t *node, *tmp;

	if (ht == NULL || key == NULL  || *key == '\0' || value == NULL)
		return (0);
	value_2 = strdup(value);
	if (value_2 == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = value_2;
			return (1);
		}
		tmp = tmp->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		free(value_2);
		return (0);
	}
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = value_2;
	node->next = ht->array[idx];
	ht->array[idx] = node;
	return (1);
}
