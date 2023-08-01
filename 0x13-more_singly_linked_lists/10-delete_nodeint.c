#include "lists.h"
/**
 * delete_nodeint_at_index - this funct deletes a node in a linked list at a certain index
 * @head1: is a pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head1, unsigned int index)
{
listint_t *temp = *head1;
listint_t *current = NULL;
unsigned int i = 0;
if (*head1 == NULL)
return (-1);
if (index == 0)
{
*head1 = (*head1)->next;
free(temp);
return (1);
}
while (i < index - 1)
{
if (!temp || !(temp->next))
return (-1);
temp = temp->next;
i++;
}
current = temp->next;
temp->next = current->next;
free(current);
return (1);
}
