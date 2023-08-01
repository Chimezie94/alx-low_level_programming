#include "lists.h"
/**
 * free_listint2 - this function frees a linked list
 * @freehead: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **freehead)
{
listint_t *temp;
if (freehead == NULL)
return;
while (*freehead)
{
temp = (*freehead)->next;
free(*freehead);
*freehead = temp;
}
*freehead = NULL;
}
