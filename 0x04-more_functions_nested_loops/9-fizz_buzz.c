#include <stdio.h>

/**
 * main - code functionality here
 *
 * Description:
 * Prints the numbers from 1 to 100, but for multiples of three,
 * it prints Fizz instead of the number, and for multiples of five, it prints Buzz.
 * For numbers that are multiples of both three and five, it prints FizzBuzz.
 *
 * Return: 0 (Success)
 */
int main(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz");
        else if (i % 3 == 0)
            printf("Fizz");
        else if (i % 5 == 0)
            printf("Buzz");
        else
            printf("%d", i);

        if (i < 100)
            printf(" ");
        else
            printf("\n");
    }

    return (0);
}
