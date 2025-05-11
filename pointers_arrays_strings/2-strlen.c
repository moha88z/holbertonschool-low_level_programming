#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
    int length = 0;

    /* Iterate through the string until we hit the null character */
    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}
