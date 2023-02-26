#include "main.h"
/**
 * print_numbers - A function that prints the numbers 0 to 9
 * @void: no content
 */
void print_numbers(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
putchar(c + '0');
}
}
