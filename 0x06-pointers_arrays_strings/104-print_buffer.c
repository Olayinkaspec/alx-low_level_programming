#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: void
 */
void print_line(char *c, int s, int l)
{
int i, j;
for (i = 0; i <= 9; i++)
{
if (i <= s)
printf("%02x", c[l * 10 + i]);
else
printf("  ");
if (i % 2)
putchar(' ');
}
for (j = 0; j <= s; j++)
{
if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
putchar(c[l * 10 + j]);
else
putchar('.');
}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
int j;
for (j = 0; j <= (size - 1) / 10 && size; j++)
{
printf("%08x: ", j * 10);
if (j < size / 10)
{
print_line(b, 9, j);
}
else
{
print_line(b, size % 10 - 1, j);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
