#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * Return: 1 when is digit, 0 when is not a digit
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return 1;
        else
                return 0;
}
