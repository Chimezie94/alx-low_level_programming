#include "main.h"
/**
 * binary_to_uint -this function converts a binary number to unsigned int
 * @f: string containing the binary number
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *f)
{
int i;
unsigned int dec_val = 0;
if (!f)
return (0);
for (i = 0; f[i]; i++)
{
if (f[i] < '0' || f[i] > '1')
return (0);
dec_val = 2 * dec_val + (f[i] - '0');
}
return (dec_val);
}
