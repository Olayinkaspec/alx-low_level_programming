#include "main.h"
#include <stdlib.h>
/**
 * create_array - A function that creates an array of chars
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: Char to fill array
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
unsigned int j;
char *s;
if (size == 0)
return (NULL);
s = malloc(size * sizeof(char));
if (s == NULL)
return (NULL);
for (j = 0; j < size; j++)
{
s[j] = c;
}
return (s);
}
