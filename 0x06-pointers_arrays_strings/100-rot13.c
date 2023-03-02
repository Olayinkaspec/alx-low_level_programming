#include "main.h"
/**
 * rot13 - Encodes a string using rot13
 * @str: string to encode
 * Return: Encoded string
 */
char *rot13(char *str)
{
int j, k;
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
j = 0;
while (str[j] != '\0')
{
k = 0;
while (alpha[k] != '\0')
{
if (str[j] == alpha[k])
{
str[j] = rot[k];
break;
}
k++;
}
j++;
}
return (str);
}
