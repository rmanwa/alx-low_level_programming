#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a listint_t list
* @h: pointer to the head of the list
*
* Return: number of nodes in the list
*/
size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
const listint_t *current = h;

while (current != NULL)
{
printf("%d\n", current->n);
num_nodes++;
current = current->next;
}

return (num_nodes);
}
