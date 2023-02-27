#include "main.h"
/**
 * print_number - Prints an integer
 * @n: numbers to print
 */
void print_number(int n)
{
unsigned int c = n;
if (n < 0)
{
n *= -1;
c = n;
_putchar('_');
}
c /= 10;
if (c != 0)
print_number(c);
_putchar((unsigned int) n % 10 + '0');
}
