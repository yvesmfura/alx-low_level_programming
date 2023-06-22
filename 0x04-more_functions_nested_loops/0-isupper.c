#include "main.h"

/**
 * _isupper - checks for upper case
 *
 * Return: 1 means true
 * Return: 0 means false
 */
int _isupper(int c)	/* c is input*/
{
	if (c >= 'A' && c <= 'Z')
		return (1);	/* is upper case*/

	else
		return (0);	/* is lower case*/
}
