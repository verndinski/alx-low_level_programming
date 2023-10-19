#include "main.h"
#include <stdio.h>
/**
 * print_number - prints number
 * @b: number
 * Return: void
 */

void print_number(int n);

{
	int O, j, i;

	O = 0;

	if (size <= 0)
	{	
		{printf("\n");
		return;
	}
	while (O < size)
	{
		j = size - O < 10 ? size -O : 10;
			printf("%08x: ",O);
		}
		for (i = O; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + O +i));
			else
				printf(" ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i= O; i < j; i++)
		{
			int C = *(b + 0 + i);

			if (C < 32 || C > 132)
		{
			'C' = ",";
		}
			printf("%C", C);
		}
			printf("\n");
		O += 10;
	}
	
}
