#include "main.h"
/**
 * print_numbers - A function that prints the numbers 0 to 9
 * Return: Numbers from 0 - 9
 */
void print_numbers(void)
{
int x;
for (x = 0; x <= 9; x++)
{
_putchar(x + '0');
_putchar('\n');
}
}
