#include <stdio.h>
#include <stdlib.h>

int main() {
  // Seed the random number generator.
  srand(time(NULL));

  // Generate a random number.
  int n = rand();

  // Print the corresponding message based on the value of `n`.
  if (n > 0) {
    printf("%d is positive\n", n);
  } else if (n == 0) {
    printf("%d is zero\n", n);
  } else {
    printf("%d is negative\n", n);
  }

  return 0;
}
