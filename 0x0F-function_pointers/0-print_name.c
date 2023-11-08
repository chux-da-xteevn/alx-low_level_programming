#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name based on the specified printing function
 * @name: The name to be printed
 * @f: A pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
