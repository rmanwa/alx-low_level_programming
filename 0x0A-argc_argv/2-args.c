#include "main.h"
#include <stdio.h>

/**
* main - Prints all arguments it receives
* @argc: Argument count
* @argv: Argument vector
*
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
int g;

for (g = 0; g < argc; g++)
{
printf("%s\n", argv[g]);
}

return (0);
}

