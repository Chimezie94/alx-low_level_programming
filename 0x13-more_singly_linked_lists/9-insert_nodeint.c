#include "lists.h"
/**
 * insert_nodeint_at_index - this funct inserts a new node in a linked list,
 * at a given position
 * @head1:is the pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head1, unsigned int idx, int n)
{
unsigned int i;
listint_t *new;
listint_t *temp = *head1;
new = malloc(sizeof(listint_t));
if (!new || !head1)
return (NULL);
new->n = n;
new->next = NULL;
if (idx == 0)
{
new->next = *head1;
*head1 = new;
return (new);
}
for (i = 0; temp && i < idx; i++)
{
if (i == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
