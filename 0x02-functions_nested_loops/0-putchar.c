#include <stdio.h>
#include "_putchar.h"

/** main - core of the program
 *
 * Return : 0 for success mark
 *
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;
	for (i = 0; i < 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
	
