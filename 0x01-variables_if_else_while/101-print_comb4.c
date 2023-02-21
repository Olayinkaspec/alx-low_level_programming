#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return:0 (Success)
 */
int main(void)
{
int a = 0, b = 7, a2 = 1, b2 = 8, a3 = 2, b3 = 9;
while (a <= b)
{
a2 = a + 1;
while (a2 <= b2)
{
a3 = a2 + 1;
while (a3 <= b3)
{
putchar(a + '0');
putchar(a2 + '0');
putchar(a3 + '0');
if (a != b)
{
putchar(',');
putchar(' ');
}
a3++;
}
a2++;
}
a++;
}
putchar('\n');
return (0);
}
