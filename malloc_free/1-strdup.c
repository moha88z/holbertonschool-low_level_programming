#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string to duplicate
 *
 * Return: pointer to duplicated string, or NULL on failure
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(sizeof(char) * (len + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];

	copy[i] = '\0';

	return (copy);
}
