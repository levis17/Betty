#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint_safe - this function frees a list in safe mode
* @h: the head of list
* Description: this function frees a string in a safe mode
* Return: the size of the list
*/

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		}
		else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}
	}

	*h = NULL;

	return (i);
}

