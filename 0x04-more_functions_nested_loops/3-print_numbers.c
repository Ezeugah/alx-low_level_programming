#include "main.h"
/**
 * print_number - prints the numbers between 0 - 9
 *
 * Return: no return
 */

void print_number(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
