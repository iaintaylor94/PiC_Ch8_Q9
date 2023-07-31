// This program calculates the least common multiple of two integers

#include <stdio.h>

// Declare Functions
int leastCommonMultiple (int, int);
int greatestCommonDivisor (int, int);

int main(void) {
  // Get input
  int u, v;
  printf ("Enter two numbers to calculate the least common multiple: ");
  scanf ("%d %d", &u, &v);

  // Compute least common multiple
  printf ("Least common multiple is: %d\n", leastCommonMultiple(u, v));
  
  return 0;
}

// Define Functions
int leastCommonMultiple (int u, int v) {
  // Test u/v >= 0
  if (u < 0 || v < 0)
    printf ("both numbers input must be greater than or equal to zero\n");

  // Calculate least common multiple
  int lcm = u * v / greatestCommonDivisor (u, v);

  return (lcm);
}

int greatestCommonDivisor (int u, int v) {
  int temp;

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  return u;
}