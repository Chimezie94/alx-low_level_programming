#include "main.h"
/**
 * set_bit - this funct sets a bit at a given index to 1
 * @n1: is pointer to the number to change
 * @index: is index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n1, unsigned int index)
{
if (index > 63)
return (-1);
*n1 = ((1UL << index) | *n1);
return (1);
}
