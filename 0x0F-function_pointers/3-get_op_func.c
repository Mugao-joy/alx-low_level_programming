#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user
 * @s: operator passed as argument to the program
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t opr[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int a = 0;

	while (opr[a].op != NULL && *(opr[a].op) != *s)
		a++;
	return (opr[a].f);
}
