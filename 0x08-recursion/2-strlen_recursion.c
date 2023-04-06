#include "main.h"
/**
 * _strlen_recursion - fxn that returns the length of a string.
 * @s: String that is to be measured
 *
 * Return: String's length
 */
int _strlen_recursion(char *s)
{
	int strlong = 0;

	if (*s)
	{
		strlong++;
		strlong += _strlen_recursion(s + 1);
	}

	return (strlong);
}
