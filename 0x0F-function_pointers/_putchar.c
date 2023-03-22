#include <unistd.h>
#include "function_pointers.h"

/**
 * _putchar - write the character to stdout
 * @c: The character to print
 *
 * Return: 1 if true, 0 if false
 * On error, -1 returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
