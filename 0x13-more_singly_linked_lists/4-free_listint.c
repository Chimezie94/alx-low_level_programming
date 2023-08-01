#include "lists.h"
/**
 * free_listint - this function frees a linked list
 * @headlist: listint_t list to be freed
 */
void free_listint(listint_t *headlist)
{
listint_t *temp;
while (headlist)
{
temp = headlist->next;
free(headlist);
headlist = temp;
}
}
