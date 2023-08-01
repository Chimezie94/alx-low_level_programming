#include "lists.h"
/**
 * pop_listint -this function deletes the head node of a linked list
 * @headelem: this pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **headelem)
{
listint_t *temp;
int num;
if (!headelem || !*headelem)
return (0);
num = (*headelem)->n;
temp = (*headelem)->next;
free(*headelem);
*headelem = temp;
return (num);
}
