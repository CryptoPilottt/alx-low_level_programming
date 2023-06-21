#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 *op_add - returns sum of 2 numbers
 *@a: 1st number
 *@b: 2nd number
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Returns the diff btwn 2 numbers
 *@a: 1st no
 *@b: 2nd no
 *Return: diff btwn a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - returns product of 2 no
 *@a: 1st no
 *@b: 2nd no
 *Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - returns division of 2 no
 *@a: 1st no
 *@b: 2nd no
 *Return: quotient of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - returns remainder of product of division of 2 no
 *@a: 1st no
 *@b: 2nd no
 *Return: remainder of division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
