#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	return 0;

	unsigned int result = 0;
	while (*b != '\0') 
	{
	if (*b != '0' && *b != '1') 
	{
	// Invalid character found, return 0
	return 0;
	}
	result = result * 2 + (*b - '0');
	b++;
	}
	return result;
}

int main()
{
	const char *binary = "101010"; // Example binary string

	unsigned int result = binary_to_uint(binary);
	printf("Converted binary to uint: %u\n", result);

	return 0;
}

