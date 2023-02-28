#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to be evaluated
 * Return: The length of the string
 */
int _strlen(char *s)
{
int length;
length = 0;
while (s[length] != '\0')
{
length++;
}
return (length);
}
