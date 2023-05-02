#include "lists.h"

/**
* add_nodeint_end - Add a new node at the end of a listint_t list.
*
* @head: A pointer to a pointer to the head node of the linked list.
* @n: The integer value to be stored in the new node.
*
* Return: The address of the new element, or NULL if it failed.
*
* Description: This function creates a new node with the given integer value
* and adds it at the end of the linked list pointed to by head. If the memory
* allocation for the new node fails, the function returns NULL.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current_node;

/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

/* Initialize the new node with the value and sets next pointer to NULL */
new_node->n = n;
new_node->next = NULL;

/* If linked list is empty,set  node as the head and return its address */
if (*head == NULL)
{
*head = new_node;
return (new_node);
}

/* Traverse the linked list to find the last node */
current_node = *head;
while (current_node->next != NULL)
current_node = current_node->next;

/* Add the new node at the end of the linked list and return its address */
current_node->next = new_node;

return (new_node);
}
