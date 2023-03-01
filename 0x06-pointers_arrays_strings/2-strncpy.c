#include "main.h"

/**
 * *_strncpy - A function that copies a string
 * @dest: string destination
 * @src: string source
 * @n: maximum number of bytes to copy from src
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int a;
a = 0;
while (src[a] != '\0' && a < n)
{
dest[a] = src[a];
a++;
}
while (a < n)
{
dest[a] = '\0';
a++;
}
return (dest);
}
