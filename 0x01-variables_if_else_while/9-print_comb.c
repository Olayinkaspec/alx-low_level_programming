#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return:0 (Success)
 */
int main(void)
{
int a = 0, b = 9;
while (a <= b)
{
putchar(a + '0');
if (a != b)
{
putchar(',');
putchar(' ');
}
a++;
}
putchar('\n');
return (0);
}
