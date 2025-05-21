#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings using first n bytes of s2
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer to new string, or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		n = len2;

	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';

	return (str);
}
