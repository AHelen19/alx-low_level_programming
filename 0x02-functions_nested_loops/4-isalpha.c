#include "main.h"

/**
 * isalpha - functions
 *
 * returns 1 or 0
 */
int _isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <='z'))
		return (1);
	else
		return (0);
}
