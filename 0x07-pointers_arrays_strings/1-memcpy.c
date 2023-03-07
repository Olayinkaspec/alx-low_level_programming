#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @dest: destination of pointer
 * @src: input
 * @n: number of bytes
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
