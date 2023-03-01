#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: Nothing!
 */
void reverse_array(int *a, int n)
{
int b, c, tmp;
c = n - 1;
for (b = 0; b < n / 2; b++)
{
tmp = a[b];
a[b] = a[c];
a[c--] = tmp;
}
}
