#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 * @name: name to print
 * @f: Pointer to function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
