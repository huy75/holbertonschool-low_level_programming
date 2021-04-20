#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - searches value in sorted skip list using jump search
 * @list: pointer to the head of the skip list
 * @value: value to search for
 *
 * Return: node where value is located
 * NULL if value not present or head is NULL
 * Prints the value at each comparaison
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *cur, *prev;

	if (!list)
		return (NULL);

	cur = list;
	while (cur->n < value && cur->express)
	{
		prev = cur;
		cur = cur->express;
		printf("Value checked at index [%lu] = [%d]\n",
		       cur->index, cur->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev->index, cur->index);

	cur = prev;
	while (cur->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       cur->index, cur->n);

		if (cur->next)
			cur = cur->next;
		else
			return (NULL);
	}
	if (cur->n == value)
		return (printf("Value checked at index [%lu] = [%d]\n",
			       cur->index, cur->n), cur);
	return (NULL);
}
