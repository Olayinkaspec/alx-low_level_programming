#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: numbers of lines to draw
 */
void print_line(int n)
{
int c;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (c = 0; c < n; c++)
{
_putchar(95);
}
_putchar('\n');
}
}
