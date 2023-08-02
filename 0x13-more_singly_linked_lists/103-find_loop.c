#include "lists.h"
/**
 * find_listint_loop - this funct finds the loop in a linked list
 * @head_1: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head_1)
{
listint_t *slow = head_1;
listint_t *fast = head_1;
if (!head_1)
return (NULL);
while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = head_1;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}
return (NULL);
}
