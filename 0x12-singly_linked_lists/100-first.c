#include <stdio.h>

/**
 * myStartupFunction - Apply the constructor attribute so that it
 *   is executed before main()
 */
void myStartupFunction(void) __attribute__ ((constructor));

/**
 * myStartupFunction - implementation of myStartupFunction
 */
void myStartupFunction(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
