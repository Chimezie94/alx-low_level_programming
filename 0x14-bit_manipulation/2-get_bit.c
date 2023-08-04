#include "main.h"
/**
 * get_bit - this function returns the value of a bit at an index in a decimal number
 * @n1: is  number to search
 * @index: is index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n1, unsigned int index)
{
int bit_val;
if (index > 63)
return (-1);
bit_val = (n1 >> index) & 1;
return (bit_val);
}
