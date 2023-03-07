#include <stdio.h>
#include "main.h"

/**
 * _strchr - A function that locates a character in a string
 * @s: input
 * @c: input
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] >= '\0'; a++)
{
if (s[a] == c)
return (s + a);
}
return (NULL);
}
