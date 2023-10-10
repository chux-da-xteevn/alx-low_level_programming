#include <unistd.h>

/** main - core of the program
 *
 * Return : 0 for success mark
 *
 */

int main()
{
	write (STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}
