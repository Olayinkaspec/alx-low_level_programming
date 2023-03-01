#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: string 1 to compare
 * @s2: string 2 to compare
 * Return: If s1 < s2, the negative difference of the first unattached char
 * if s1 == s2, 0
 * if s1 > s2, the positive difference of the first unattached char
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}
return (*s1 - *s2);
}
