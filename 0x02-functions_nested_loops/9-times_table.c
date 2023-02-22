#include "main.h"
/**
 * times_table - prints the 9 times table from zero
 * Return: times table
 */
void times_table(void)
{
int u, v, y, z, d;
for (u = 0; u <= 9; u++)
{
for (v = 0; v <= 9; v++)
{
y = u + v;
if (y > 9)
{
z = y % 10;
d = (y - z) / 10;
_putchar(44);
_putchar(32);
_putchar(d + '0');
_putchar(z + '0');
}
else
{
if (v != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);
}
}
_putchar(y + '0');
}
_putchar('\n');
}
}
