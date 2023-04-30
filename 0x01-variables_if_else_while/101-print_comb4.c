#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/

int main(void)
{
int k, s, i;

for (k = '0'; k < '9'; k++)
{
for (s = k + 1; s <= '9'; s++)
{
for (i = s + 1; i <= '9'; i++)
{
if ((s != k) != i)
{
putchar(k);
putchar(s);
putchar(i);
if (k == '7' && s == '8')
continue;
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
