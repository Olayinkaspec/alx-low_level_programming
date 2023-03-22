#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer
 * @array: elements
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 * Return: -1 if no element matches and size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int j;
if (array && cmp)
{
for (j = 0; j < size; j++)
{
if (cmp(array[j]) != 0)
return (j);
}
}
return (-1);
}
