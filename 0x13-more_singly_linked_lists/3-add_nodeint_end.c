#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* add_nodeint_end - Add a new node at the end of a list
* @n: The element of the node to be added
* @head: The first node of the list
* Return: The address of the new element, NULL if failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;
		lastnode->next = new_node;
	}
	return (new_node);
}

