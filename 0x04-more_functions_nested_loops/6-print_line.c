#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: number of times '_' should be printed
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int c;
for (c = 0; c <= n; c++)
{
_putchar('_');
}
_putchar('\n');
}
}
