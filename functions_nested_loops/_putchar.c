#include <unistd.h>

/**
 * _putchar - يطبع الحرف c إلى stdout
 * @c: الحرف المطلوب طباعته
 * Return: 1 إذا نجحت الكتابة، -1 إذا فشلت
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
