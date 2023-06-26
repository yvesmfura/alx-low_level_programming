#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print choosen characters by selection algorithm
 */
void puts2(char *str)
{
	int length = 0;
	int n = 0;
	char *p = str;
	int i;

	while (*p != '\0')
	{
		p++;
		length++;
	}
	n = length - 1;
	for (i = 0 ; i <= n ; i++)
	{
		if (i % 2 == 0)
	{
		_putchar(str[i]);
	}
	}
	_putchar('\n');
}
