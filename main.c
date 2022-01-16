// Entry Point

#include <stdio.h>
#include <math.h>
#include <stdbool.h> // boolean library, In C, boolean values TRUE and FALSE are represented by 1 and 0.
#include <string.h>

// constants
#define CONSTANT 1

// prototyping
void example(char *string);
void conditional(void);
int recursion (int);
void loops(void);
void arrays(void);
void ADT(void);

int main(int argc, char* argv[]) // takes command line inputs
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
  pow(2.0, 3.0);
  log(2.0);

  (char) 0; // explicitly casting 0 as a char



  return 0;
}

void example (char *string) {
  // add a star to allow for unknown lettered string being an array for chars
}

void conditional (void) {
  // conditionals
  bool condition = true;
  if (condition)
  {
    printf("");
  } else if (!condition) {
    printf("");
  } else {
    printf("");
  }
}

int recursion(int arg) {
  // base case
  if (arg < 0) return 0;
  // recursive case
  arg--;
  recursion(arg);
}

void loops (void) {
  // for loop
  for (int i = 0; i < 10; i++)
  {
    /* code */
  }
  // while loop
  int i = 0;
  while (i < 10)
  {
    /* code */
    i++;
  }

  // do loop always does first iteration
  do
  {
    /* code */
    i++;
  } while (i < 10);
}

void arrays(void) {
  // declaring an array of 5 ints, doubles, strings
  int intArray[5];
  double doubleArray[5];
  char* stringArray[5];

  // multidimensional 2 by 2 array
  int multArray[2][2];

  // strings
  // ! declare strings immediately
  char stringExample[6];

  stringExample[0] = 's';
  stringExample[1] = 'f';
  stringExample[2] = 'h';
  stringExample[3] = 'q';
  stringExample[4] = 'q';
  stringExample[5] = 0; // signifies end of string

  char stringExample2[6];
  char stringExample2[6] = {'s', 'e', 'q', 'g', 'm', 0};

  char stringExample3[] = "aaaaa";

  // * methods on strings
  strcpy(stringExample, stringExample2); // copies 2 to use instead of secondary assingment
  strlen(stringExample2); // length
  strcat(stringExample2, stringExample3); // stringExample2 + stringExample3 in js
}

void ADT (void) {
  // abstract data structures

  // creates a country data structure
  struct Country
  {
    char* name;
    double longitude;
    double latitude;
    int phone;
  };

  // initialises a new country fo ADT Country
  struct Country mauritius;
  strcpy(mauritius.name, "Mauritius");
  mauritius.latitude = 0.123;
  mauritius.longitude = 0.123;
  mauritius.phone = 230;
}

    // Compilation: gcc <filename.c> -o <filename>
    // Execution: ./<filename>
