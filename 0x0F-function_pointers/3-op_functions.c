#include "3-calc.h"
#include <stdlib.h>


typedef int (*op_func)(int, int);  // Define a function pointer type

/**
 * get_op_func - Returns a function pointer based on the given operator.
 * @s: The operator as a string.
 *
 * Return: A function pointer corresponding to the given operator.
 */
op_func get_op_func(char *s)
{
	if (s == NULL)
		return (NULL);
	if (*s == '+')
		return (op_add);
	if (*s == '-')
		return (op_sub);
	if (*s == '*')
		return (op_mul);
	if (*s == '/')
		return (op_div);
	if (*s == '%')
		return (op_mod);
	return (NULL);
}

/**
 * main - Prints the result of simple operations.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;
	op_func func;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	func = get_op_func(op);
	if (func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*op == '/' && num2 == 0) ||
	    (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
