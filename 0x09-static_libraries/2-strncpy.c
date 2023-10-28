#include "main.h"
/**
 * _strncpy - program copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int a)
{
	int b = 0;

	while (b < a && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < a)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
