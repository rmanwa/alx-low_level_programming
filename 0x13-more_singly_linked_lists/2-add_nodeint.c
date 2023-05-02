#include "lists.h"

/**
* add_nodeint - Add a new node at the beginning of a listint_t list.
*
* @head: A pointer to a pointer to the head node of the linked list.
* @n: The integer value to be stored in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Description: This function creates a new node with the given integer value
* and adds it at the beginning of the linked list pointed to by head. If the
* memory allocation for the new node fails, the function returns NULL.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node with the value and update its next pointer */
new_node->n = n;
new_node->next = *head;

/* Update the head pointer to point to the new node and return its address */
*head = new_node;

return (new_node);
}
