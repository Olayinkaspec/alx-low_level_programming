#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: pointer
 * @accept: pointer
 * Return: 0(Success)
 */
char *_strpbrk(char *s, char *accept)
{
int a;
int b;
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
{
return (s + a);
}
}
}
s = 0;
return (0);
}
