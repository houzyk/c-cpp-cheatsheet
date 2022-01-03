// Entry Point

#include <stdio.h>

// constants
#define CONSTANT 1

int main()
{
  // Types
  char x; // 8 bits
  x = 'x';
  int y; /* 4 bytes */
  y = 1;
  float z; /* 32 bits */
  z = 3.1f; // ! f
  double w = 1.618f; // ! f, 64 bits. IEEE754 standard

  //  modifiers

  unsigned int a;
  unsigned char b;
  signed int aa;
  signed char bb;
  long int aaaa;
  long double bbb;
  short int aaa;

  // format specifiers

  printf("%c\n", x); // %c for char, \n new line
  printf("%d\n", y); // %d for int
  printf("%f\n", z); // %f for float, o.xf for x precision

  return 0;
}

// Compilation: gcc <filename.c> -o <filename>
// Execution: ./<filename>
