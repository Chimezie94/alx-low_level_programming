#include <stdio.h>
/**
 * main - Entry point
 * Return: Eachtime 0 (Success)
 */
int main(void)
{
int b;
for
(b = 0; b < 10; b++)
{
putchar(b + '0');
if
(b < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
