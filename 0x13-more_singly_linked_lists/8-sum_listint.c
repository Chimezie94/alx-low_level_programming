#include "lists.h"
/**
 * sum_listint - the fucntion calculates the sum of all the data in a listint_t list
 * @head1: is first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head1)
{
int sum = 0;
listint_t *temp = head1;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
