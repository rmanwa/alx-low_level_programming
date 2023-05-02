#include"lists.h"
/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list
* @head: Pointer to the head node of the list
* @index: Index of the node to return (starting at 0)
*
* Return: Pointer to the nth node, or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int t = 0;

while (current != NULL)
{
if (t == index)
return (current);

current = current->next;
t++;
}

return (NULL);
}
