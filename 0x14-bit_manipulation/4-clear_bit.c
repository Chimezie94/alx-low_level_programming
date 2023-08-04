#include "main.h"
/**
 * clear_bit - the function sets the value of a given bit to 0
 * @n1: is pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n1, unsigned int index)
{
if (index > 63)
return (-1);
*n1 = (~(1UL << index) & *n1);
return (1);
}
