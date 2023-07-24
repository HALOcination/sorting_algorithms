#include "sort.h"

/**
* insertion_sort_list - sorts doubly linked list of integers in ascending order
*
* @list: pointer to the head of DLL of int
*
* BY: HALO
*
* Return: void
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *elm, *tmp;

	if (!list)
		return;

	elm = *list;

	while (elm)
	{
		while (elm->next && (elm->n > elm->next->n))
		{
			tmp = elm->next;
			elm->next = tmp->next;
			tmp->prev = elm->prev;

			if (elm->prev)
				elm->prev->next = tmp;

			if (tmp->next)
				tmp->next->prev = elm;

			elm->prev = tmp;
			tmp->next = elm;

			if (tmp->prev)
				elm = tmp->prev;
			else
				*list = tmp;

			print_list(*list);
		}
		elm = elm->next;
	}
}
