#include "function_pointers.h"

/**
 * print_name - calls a function to print a name
 * @name: pointer to the name string
 * @f: function pointer to a function that takes a char * argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
