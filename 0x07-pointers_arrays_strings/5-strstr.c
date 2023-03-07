#include "main.h"
/**
 * _strstr - A function that locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0(Success)
 */
char *_strstr(char *haystack, char *needle)
{
int a;
int b;
int c;
for (a = 0; haystack[a]; a++)
{
for (c = a, b = 0; needle[b] != '\0'; b++, c++)
{
if (haystack[c] != needle[b] || haystack[c] == '\0')
{
break;
}
}
if (needle[b] == 0)
{
return (haystack + a);
}
}
return (0);
}
