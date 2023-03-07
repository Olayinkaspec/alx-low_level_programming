#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int a;
int b;
unsigned int count = 0;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
{
count++;
break;
}
}
if (s[a] != accept[b])
{
break;
}
}
return (count);
}
