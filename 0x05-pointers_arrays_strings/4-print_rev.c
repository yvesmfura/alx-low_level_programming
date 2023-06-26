#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a new line
 * @s: The input string to be printed in reverse
 */

void print_rev(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	while (i >= 0)
		_putchar(s[i--]);

	_putchar('\n');
}
