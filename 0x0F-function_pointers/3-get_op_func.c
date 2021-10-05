#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - select correct function to perform op selected by user
 * function pointer
 * @a: type int
 * @b: type int
 * Return: int type
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
	int i;
    	i = 0;
    	while (ops[i].op)
    	{
	    	if (strcmp(ops[i].op, s) == 0)
		    	return (ops[i].f);
	    	i++;
    	}
    	return (NULL);
}
