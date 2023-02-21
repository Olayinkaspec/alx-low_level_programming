#include "main.h"
/**
 * print_alphabet_x10 - prints an alphabet times 10
 * Return: x10 a-z (success)
 */
void print_alphabet_x10(void)
{
int k, co;
co = 0;
while (co < 10)
{
for (k = 'a'; k <= 'z'; k++)
{
_putchar(k);
}
co++;
_putchar('\n');
}
}
