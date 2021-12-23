// Entry Point

#include <stdio.h>

// constants
#define CONSTANT 1

int main()
{
  // Types
  char x;
  x = 'x';
  int y;
  y = 1;
  float z;
  z = 3.1f; // ! f
  double w = 1.618f; // ! f

  printf("%c\n", x); // %c for char, \n new line
  printf("%d\n", y); // %d for int
  printf("%f\n", z); // %f for float, o.xf for x precision

  return 0;
}

// Compilation: gcc <filename.c> -o <filename>
// Execution: ./<filename>
