#include "main.h"
/**
 * _puts - Prints a string to stdout.
 * @str: The string.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
