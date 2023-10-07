#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * This code for c programming basics
 * with betty just everywhere 
 * but we move 
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d Last digit of  \n", n);
	if (n > 5)
		printf("%d and is greater than 5 \n", n);
	else if (n == 0)
		printf("%d and is 0 \n", n);
	else if (n < 6 && n != 0)
		printf("%d and is less than 6 and not 0 \n", n);
	return (0);
}
