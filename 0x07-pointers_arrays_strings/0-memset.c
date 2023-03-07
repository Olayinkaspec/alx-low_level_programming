#include "main.h"

/**
 * _memset - A function that  fills memory
 * with a constant byte
 * @s: destination of pointer
 * @b: constant byte
 * @n: number of bytes
 * Return: A pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
