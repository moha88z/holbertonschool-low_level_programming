#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 */
void print_alphabet_x10(void)
{
	int row = 0;
	int ch;

	while (row < 10)
	{
		ch = 97; /* ASCII for 'a' */
		while (ch <= 122) /* ASCII for 'z' */
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		row++;
	}
}
