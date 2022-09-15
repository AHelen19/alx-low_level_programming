#include "main.h"

/**
 * _isupper - checks
 * @c: The character to be checked.
 * Return: 1 if it is uper
 */
int _isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	else
		return (0);

}

