// Entry Point

#include <stdio.h>
#include <math.h>
#include <stdbool.h> // boolean library, In C, boolean values TRUE and FALSE are represented by 1 and 0.

// constants
#define CONSTANT 1

char main()
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
  /*

  %p pointer
  %s string
  %% percentage
  %n nothing
  \\ for \

  */

  // math functions
  sqrt(4.0);


  return (char) 0; // explicitly casting 0 as a char
}

void example (char *string) {
  // add a star to allow for unknown lettered string being an array for chars
}
// Compilation: gcc <filename.c> -o <filename>
// Execution: ./<filename>
