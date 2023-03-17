#include <stdio.h>
#include "main.h"
/**
 * main - A program that prints the number of arguments passed
 * followed by a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
