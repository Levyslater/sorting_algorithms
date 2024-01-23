#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list using insertion sort
 *
 * @list: double pointer to the list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *head, *ptr, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	head = *list;  /* Head of the sorted list*/
	ptr = head->next;  /* Pointer to the unsorted part of the list*/

	while (ptr != NULL)
	{
		tmp = ptr->prev;  /* Pointer to the last node in the sorted part*/
		while (tmp != NULL && tmp->n > ptr->n)
		{
			/*Swap the nodes*/
			if (tmp->prev != NULL)
				tmp->prev->next = ptr;
			else
				head = ptr;
			ptr->prev = tmp->prev;
			tmp->prev = ptr;
			tmp->next = ptr->next;
			if (ptr->next != NULL)
				ptr->next->prev = tmp;
			ptr->next = tmp;

			print_list(head);

			tmp = ptr->prev;  /*Update tmp for the next iteration*/
		}
		/*Move to the next node in the unsorted part of the list*/
		ptr = ptr->next;
	}
	*list = head;  /*Update the head of the list*/
}
