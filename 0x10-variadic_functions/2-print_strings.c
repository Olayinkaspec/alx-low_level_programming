#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - A function that prints strings,
 * followed by a new line
 * @separator: string to be printed
 * @n: number of strings passed
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list string;
unsigned int i;
char *str;
if (separator == NULL)
{
separator = "";
}
va_start(string, n);
for (i = 0; i < n; i++)
{
str = va_arg(string, char *);
if (str == NULL)
{
printf("(nil)");
break;
}
printf("%s", str);
if (n == i + 1)
{
break;
}
printf("%s", separator);
}
printf("\n");
va_end(string);
}
