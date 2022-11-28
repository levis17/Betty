#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes a node at a designated index
* @head: Pointer to the beginning of the list
* @index: Index of the node to be deleted
* Return: 1 if susccessful, -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && tmp != NULL && index != 0; i++)
		tmp = tmp->next;
	if (tmp == NULL)
		return (-1);
	if (index == 0)
	{
		new_node = tmp->next;
		free(tmp);
		*head = new_node;
	}
	else
	{
		if (tmp->next == NULL)
			new_node = tmp->next;
		else
			new_node = tmp->next->next;
		free(tmp->next);
		tmp->next = new_node;
	}
	return (1);
}

