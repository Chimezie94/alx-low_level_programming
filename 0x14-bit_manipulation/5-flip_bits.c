#include "main.h"
/**
 * flip_bits - this funct counts the number of bits to change
 * to get from one number to another
 * @n1: is the first number
 * @m1: is the second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n1, unsigned long int m1)
{
int i, count = 0;
unsigned long int current;
unsigned long int exclusive = n1 ^ m1;
for (i = 63; i >= 0; i--)
{
current = exclusive >> i;
if (current & 1)
count++;
}
return (count);
}
