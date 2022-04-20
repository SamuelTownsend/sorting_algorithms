#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: reference to doubly linked list to be sorted
 * Return: is void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current = NULL; /* helps traverse list & swap node */

	if (list == NULL)
	{
		return;
	}
	current = (*list)->next; /* set node to traverse list */
	while (current) /* until we're at end of list */
	{
		/* this condition sets sort in ascending order */
		while (current->prev && current->prev->n > current->n)
		{
			current->prev->next = current->next;
			if (current->next)
			{
				current->next->prev = current->prev;
			}
			/* statements to swap nodes when applicable */
			current->next = current->prev;
			current->prev = current->prev->prev;
			current->next->prev = current;
			if (!current->prev)
			{
				*list = current;
			}
			else
			{
				current->prev->next = current;
			}
			print_list(*list);
		}
		current = current->next;
	}
}
