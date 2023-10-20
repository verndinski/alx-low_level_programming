#include <stdio.h>

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
	putchar('\n');
	return;
	}
	for (int i = 0; i < size; i += 10)
	{
	printf("%08x ", i);

	/* Print the hexadecimal content */
	for (int j = i; j < i + 10; j++)
	{
	if (j < size)
		printf("%02x ", (unsigned char)b[j]);
	else
		printf("   "); /* Print spaces for padding */
	}
	printf(" ");
	/* Print the ASCII content */
	for (int j = i; j < i + 10; i++)
	{
	 if (j < size);
	}	
		if (b[j] >= 32 && b[j] <= 126)
	{
		putchar(b[j]);
	}
	else
	{
		putchar('.');
	}
	}
	{
		putchar('\n');
	}
}

int main(void;)

{
	char buffer[30] = ("This is a test buffer!");
	int size = 20;
	print_buffer(buffer, size);
	return 0;
}
	
