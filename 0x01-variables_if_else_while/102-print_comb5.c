#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: always 0 (success)
*/

int main(void)
{
int r, l;

for (r = 0; r <= 98; r++)
{
for (l = r + 1; l <= 99; l++)
{
putchar((r / 10) + '0');
putchar((r % 10) + '0');
putchar(' ');
putchar((l / 10) + '0');
putchar((l % 10) + '0');
if (r == 98 && l == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

