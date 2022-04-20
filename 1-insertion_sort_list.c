#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending
 * order using the insertion sort algorithm
 * @list: reference to doubly linked list to be sorted
 * Return: is void
 */


void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *index;

	if (*list == NULL)
	{
		return;
	}
	current = (*list)->next; /* set node to traverse list */
	while (current)
	{
		index = current; /* copy current to index */
		current = current->next; /* move to next node */
		while (index && index->prev)
		{
			
