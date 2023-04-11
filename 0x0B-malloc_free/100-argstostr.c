#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments passed to program
 * @arg_count: count of arguments
 * @arg_array: array of arguments
 * Return: pointer to concatenated string
 */
char *argstostr(int arg_count, char **arg_array)
{
        int i, j, k = 0, len = 0;
        char *str;

        if (arg_count == 0 || arg_array == NULL)
                return (NULL);

        for (i = 0; i < arg_count; i++)
        {
                for (j = 0; arg_array[i][j]; j++)
                        len++;
        }
        len += arg_count;

        str = malloc(sizeof(char) * (len + 1));
        if (str == NULL)
                return (NULL);

        for (i = 0; i < arg_count; i++)
        {
                for (j = 0; arg_array[i][j]; j++)
                {
                        str[k] = arg_array[i][j];
                        k++;
                }
                if (str[k] == '\0')
                {
                        str[k++] = '\n';
                }
        }
        str[k] = '\0';
        return (str);
}
