#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that generates random valid passwords
 * Return: 0 (Success)
 */
int main(void)
{
int pass[100];
int b, sum, n;
sum = 0;
srand(time(NULL));
for (b = 0; b < 100; b++)
{
pass[b] = rand() % 78;
sum += (pass[b] + '0');
putchar(pass[b] + '0');
if ((2722 - sum) - '0' < 78)
{
n = 2772 - sum - '0';
sum += n;
putchar(n + '0');
break;
}
}
return (0);
}
