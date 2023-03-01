#include "main.h"

/**
 * *string_toupper - A function that changes lowercase letters
 * to uppercase
 * @s: string to be modified
 * Return: A pointer to the string
 */
char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}
