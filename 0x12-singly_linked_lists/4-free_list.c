#include "lists.h"

/**
 * free_list - frees memory allocated to singly linked list
 * @head: pointer to first node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		if (temp->str != NULL)
			free(temp->str);
		free(temp);
	}
}
