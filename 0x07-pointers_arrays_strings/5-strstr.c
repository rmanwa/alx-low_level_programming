#include "main.h"
/**
 * _strstr - Entry point
 * @needle: serves as input
 * @haystack: serves as input
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = needle;
		char *h = haystack;

		while (*h == *n && *h != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
	}
	return (0);
}

