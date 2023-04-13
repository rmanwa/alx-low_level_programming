#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @src: string to append to
 * @concat: string to concatenate from
 * @n: number of bytes from concat to concatenate to src
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *src, char *concat, unsigned int n)
{
    char *result;
    unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

    while (src && src[len1])
        len1++;
    while (concat && concat[len2])
        len2++;

    if (n < len2)
        result = malloc(sizeof(char) * (len1 + n + 1));
    else
        result = malloc(sizeof(char) * (len1 + len2 + 1));

    if (!result)
        return (NULL);

    while (i < len1)
    {
        result[i] = src[i];
        i++;
    }

    while (n < len2 && i < (len1 + n))
        result[i++] = concat[j++];

    while (n >= len2 && i < (len1 + len2))
        result[i++] = concat[j++];

    result[i] = '\0';

    return (result);
}

