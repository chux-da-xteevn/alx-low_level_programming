#include "function_pointers.h"

/**
 * print_name - Prints a name using a function
 * @name: Name to be printed
 * @f: Function pointer to a name printing function
 */
void print_name(char *name, void (*f)(char *))
{
    if (f)
        f(name);
}

/**
 * print_name_as_is - Prints a name as is
 * @name: Name to be printed
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - Prints a name in uppercase
 * @name: Name to be printed
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}
