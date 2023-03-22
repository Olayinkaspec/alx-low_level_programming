#include "3-calc.h"

/**
 * get_op_func - A function that selects the correct function
 * to perform the operation asked by the user
 * @s: operator passed as argument
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int k;
k = 0;
while (ops[k].op)
{
if (strcmp(ops[k].op, s) == 0)
return (ops[k].f);
k++;
}
return (NULL);
}
