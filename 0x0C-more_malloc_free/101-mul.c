#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	char *num1_str, *num2_str;
	int num1, num2;
	int result;

	if (argc != 3)
	{
	printf("Error\n");
	return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];
	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
	printf("Error\n");
	return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = multiply_numbers(num1, num2);
	printf("%d\n", result);

	return (0);
}

