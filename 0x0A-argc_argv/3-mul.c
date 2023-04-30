#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers entered as command-line arguments
* @argc: Argument count
* @argv: Argument vector
* Return: 0 if successful, 1 otherwise
*/

int main(int argc, char *argv[])
{
	int num1, num2, result;

	num1 = 0;
	num2 = 0;
	result = (num1 * num2);

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = (num1 * num2);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
