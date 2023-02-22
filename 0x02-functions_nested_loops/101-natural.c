#include <stdio.h>
/**
 * main - computes and prints the sum of all the multiples of 3 or 5 until 1024
 * Return: 0 (Success)
 */
int main(void)
{
int e, a = 0;
while (e < 1024)
{
if ((e % 3 == 0) || (e % 5 == 0))
{
a += e;
}
e++;
}
printf("%d\n", a);
return (0);
}
