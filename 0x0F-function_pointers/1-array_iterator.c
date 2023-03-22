#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: pointer to function
 * @size: array size
 * @action: pointer to the function used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int j = 0;
if (array != NULL && action != NULL && size > 0)
{
while (j < size)
{
action(array[j]);
j++;
}
}
}
