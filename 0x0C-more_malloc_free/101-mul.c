#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_positive_integer(char *str)
{
	while (*str)
	{
	if (!isdigit(*str))
	{
		return 0;
	}
	str++;
	}
	return 1;
}

int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return 98;
	}	

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	if (!is_positive_integer(num1_str) || !is_positive_integer(num2_str))
	{
	printf("Error\n");
	return 98;
	}

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	int result = multiply_numbers(num1, num2);
	printf("%d\n", result);

	return 0;
}
