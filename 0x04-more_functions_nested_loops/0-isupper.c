#include "main.h"

/**
 * _isupper - checks for upper case
 *
 * Return: 1 if the character is uppercase, 0 if it is lower.
 */

int _isupper(int c)	/* c is input*/
{
	if (c >= 'A' && c <= 'Z')
		return (1);	/* is upper case*/

	else
		return (0);	/* is lower case*/
}
