#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: pointer to the pointer to the first element in the list
*
* Return: the data inside the deleted node,
* or 0 if the list is empty
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (!head || !*head)
		return (0);

	data = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (data);
}
