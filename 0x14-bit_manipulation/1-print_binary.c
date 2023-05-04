#include "main.h"

/**
* print_binary - Prints the binary equivalent of a decimal number.
* @n: The decimal number to convert to binary and print.
*
* Return: none.
*/
void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int r;

for (i = 63; i >= 0; i--)
{
r = n >> i;

if (r & 1)
{
_putchar('1');
count++;
}
else if (count)
_putchar('0');
}

if (!count)
_putchar('0');
}
