#include <stdio.h>
#include "main.h"

/**
 * print_array - A function that prints n elements of an array of integer
 * followed by a new line
 * @a: array to print
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
