#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
    int i, j;

    for (i = 0; i < 10; i++)  // يكرر الطباعة 10 مرات
    {
        for (j = 'a'; j <= 'z'; j++)  // يطبع الحروف من a إلى z
        {
            _putchar(j);
        }
        _putchar('\n');  // يطبع سطر جديد بعد كل سطر
    }
}
