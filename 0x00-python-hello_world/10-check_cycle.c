#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if list is cyclical
 * @list: pointer to list to check
 * Return: 1 if cyclical, 0 otherwise
 */
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list || !list->next)
		return 0;
	slow = list;
	fast = list->next;

	while (fast && fast->next)
	{
		if (slow == fast)
			return 1;
		slow = slow->next;
		fast = fast->next->next;
	}
	return 0;
}
