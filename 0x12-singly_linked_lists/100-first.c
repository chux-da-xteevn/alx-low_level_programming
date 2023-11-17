#include <stdio.h>

/**
 * premain - This Function executes before the main function.
 *
 * Description: Prints a message
 * before the main function is executed.
 */
void __attribute__((constructor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
