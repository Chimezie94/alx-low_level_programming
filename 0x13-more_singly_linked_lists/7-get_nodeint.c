#include "lists.h"
/**
 * get_nodeint_at_index - this funct returns the node at a certain index in a linked list
 * @head1: is first node in the linked list
 * @index: is the index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head1, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head1;
while (temp && i < index)
{
temp = temp->next;
i++;
}
return (temp ? temp : NULL);
}
