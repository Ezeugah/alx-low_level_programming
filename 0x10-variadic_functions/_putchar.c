#include <unistd.h>
#include "variadic_functions.h"
/**
 * _putchar - write the character c to stdout
 * @c: The character to print
 *
 * Return: 1 if true, 0 if false
 * on error, -1 returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
