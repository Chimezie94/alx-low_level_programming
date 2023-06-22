#include <stdio.h>
/**
 * main - Entry point
 * Return: Eachtime 0 (Success)
 */
int main(void)
{
char g;
g = 'a';
while
(g <= 'z') {
if
((g != 'q' && g != 'e') && (g <= 'z'))
putchar(g);
	g++;
}
putchar('\n');
return (0);
}

