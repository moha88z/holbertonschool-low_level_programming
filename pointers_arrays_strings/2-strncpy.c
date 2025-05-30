#include "main.h"

/**
 * _strncpy - Copies at most n bytes from src to dest.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The maximum number of bytes to be copied from src.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* Copy characters from src to dest, up to n characters */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If the string is shorter than n, fill the rest with '\0' */
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

