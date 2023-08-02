#include "lists.h"
#include <stdio.h>
size_t looped_listint_len(const listint_t *head1);
size_t print_listint_safe(const listint_t *head1);
/**
 * looped_listint_len - this funct Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head1: it is a pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head1)
{
const listint_t *tortoise, *hare;
size_t nodes = 1;
if (head1 == NULL || head1->next == NULL)
return (0);
tortoise = head1->next;
hare = (head1->next)->next;
while (hare)
{
if (tortoise == hare)
{
tortoise = head1;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
hare = hare->next;
}
tortoise = tortoise->next;
while (tortoise != hare)
{
nodes++;
tortoise = tortoise->next;
}
return (nodes);
}
tortoise = tortoise->next;
hare = (hare->next)->next;
}
return (0);
}
/**
 * print_listint_safe - this funct Prints a listint_t list safely.
 * @head1: is a pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head1)
{
size_t nodes, index = 0;
nodes = looped_listint_len(head1);
if (nodes == 0)
{
for (; head1 != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head1, head1->n);
head1 = head1->next;
}
}
else
{
for (index = 0; index < nodes; index++)
{
printf("[%p] %d\n", (void *)head1, head1->n);
head1 = head1->next;
}
printf("-> [%p] %d\n", (void *)head1, head1->n);
}
return (nodes);
}
