#include <stdio.h>
#include "main.h"

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
int k;

if (argc > 0)
{
for (k = 0; k < argc; k++)
{
printf("%s\n", argv[0]);
}
}

return (0);
}
