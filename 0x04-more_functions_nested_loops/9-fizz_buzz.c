#include "main.h"
#include <stdio.h>
/**
 * main - Prints the numbers from 1 to 100
 * Return: 0 (Success)
 */
int main(void)
{
int b;
for (b = 1; b <= 100; b++)
{
if (b % 3 == 0 && b % 5 != 0)
{
printf("Fizz");
}
else if (b % 5 == 0 && b % 3 != 0)
{
printf("Buzz");
}
else if (b % 3 == 0 && b % 5 == 0)
{
printf("FizzBuzz");
}
else if (b == 1)
{
printf("%d", b);
}
else
{
printf("%d", b);
}
printf("\n");
return (0);
}
}
