#include "lists.h"
#include <stdlib.h>

/**
 * list_len - rerurns the number of elements
 * @h: pointer to thr head of the list
 * Return: elm_count
 */
size_t list_len(const list_t *h)
{
	size_t elm_count = 0;

	while (h != NULL)
	{
		elm_count++;
		h = h->next;
	}

	return (elm_count);
}
