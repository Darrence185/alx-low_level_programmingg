#include <stdio.h>
/**
 * op_add -return sum of a and b
 * @a: type int
 * @b: type int
 * Return: sum -type int
 */
int op_add(int a, int b)
{
	int sum = a + b;

	return (sum);
}
/**
 * op_sub -return diff of a and b
 * @a: type int
 * @b: type int
 * Return: diffrence, type int
 */
int op_sub(int a, int b)
{
	int diff = a - b;

	return (diff);
}
/**
 * op_mul - return product of a and b
 * @a: type int
 * @b: type int
 * Return: product
 */
int op_mul(int a, int b)
{
	int prod = a * b;

	return (prod);
}
/**
 * op_div - divide a by b
 * @a: type int
 * @b: type int
 * Return: division
 */
int op_div(int a, int b)
{
	int div = a / b;

	return (div);
}
/**
 * op_mod - return the remainder of the division of a by b 
 * @a: type int
 * @b: type int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	int modul = a % b;

	return (modul);
}
