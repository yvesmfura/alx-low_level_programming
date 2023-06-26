/**
 * swap_int - swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 * @s: servers as temporary value holder
 */
 
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}

