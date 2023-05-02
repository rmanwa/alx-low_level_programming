#include "lists.h"

/**
* delete_nodeint_at_index - deletes the node at index of a linked list.
* @head: double pointer to the first node of the linked list
* @index: index of the node to delete
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int p = 0;
	listint_t *temp, *prev;

	if (!*head)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	while (temp && p < index)
	{
		prev = temp;
		temp = temp->next;
		p++;
	}

	if (!temp)
		return (-1);

	prev->next = temp->next;
	free(temp);

	return (1);
}
