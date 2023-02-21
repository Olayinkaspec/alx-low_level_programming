#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return:0 (Success)
 */
int main(void)
{
int a = 0, b = 8, a1 = 1, b2 = 9, tmp = 1;
while (a <= b)
{
a1 = tmp;
while (a1 <= b2)
{
putchar(a + '0');
putchar(a1 + '0');
a1++;
if (a != b)
{
putchar(',');
putchar(' ');
}
}
tmp++;
a++;
}
putchar('\n');
return (0);
}
