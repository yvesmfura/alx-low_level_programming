#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 * @m: Temporary value holder 
 */
void rev_string(char *s)
{
	int length = 0;
	int beginning = 0;
	int ending = 0;
	char m;

	/* Find the length of the string */
	while (s[length] != '\0')
		length++;

	ending = length - 1;

	/* Reverse the string by swapping characters */
	while (beginning < ending)
	{
		m = s[beginning];
		s[beginning] = s[ending];
		s[ending] = m;

		beginning++;
		ending--;
	}
}
