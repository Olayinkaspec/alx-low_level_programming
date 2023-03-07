#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A function that prints the sum of the two diagonals
 * of a square matrix of integers
 *@a: pointer
 *@size: value
 * Return: Nothing!
 */
void print_diagsums(int *a, int size)
{
int m;
int n;
int dg_r = 0;
int dg_l = 0;
int p;
for (m = 0; m < size; m++)
{
for (n = 0; n < size; n++)
{
p = (m * size) + n;
if (m == n)
{
dg_r = dg_r + a[p];
}
if ((m + n) == (size - 1))
{
dg_l = dg_l + a[p];
}
}
}
printf("%d, %d\n", dg_r, dg_l);
}
