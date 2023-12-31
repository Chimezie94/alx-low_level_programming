#include "lists.h"
/**
 * listint_len -this function returns the number of elements in a linked lists
 * @g:it is a linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *g)
{
size_t num = 0;
while (g)
{
num++;
g = g->next;
}
return (num);
}
