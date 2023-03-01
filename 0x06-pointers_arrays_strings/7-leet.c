#include "main.h"
/**
 * leet - Encodes a string into 1337
 * @n: input
 * Return: The value of n
 */
char *leet(char *n)
{
int j, k;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (j = 0; n[j] != '\0'; j++)
{
for (k = 0; k < 10; k++)
{
if (n[j] == a[k])
{
n[j] = b[k];
}
}
}
return (n);
}
