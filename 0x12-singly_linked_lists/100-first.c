#include <stdio.h>

/**
 * __attribute__ ((constructor)) pre_main - prints a message before main function
 */
void pre_main(void)
{
    printf("You're beat! and yet, you must allow,\n"
           "I bore my house upon my back!\n");
}

