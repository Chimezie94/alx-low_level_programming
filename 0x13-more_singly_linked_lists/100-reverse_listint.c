#include "lists.h"
/**
 * reverse_listint - this function reverses a linked list
 * @head1: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;
while (*head1)
{
next = (*head1)->next;
(*head1)->next = prev;
prev = *head1;
*head1 = next;
}
*head1 = prev;
return (*head1);
}
