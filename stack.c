#include <stdbool.h> // bool DT

struct Stack {
  int header; // header
  int size; // size
  int stack[10]; //stack
};

struct Stack example;

// stack methods
void init () {
  example.size = 10;
  example.header = 0;
}

bool isEmpty() {
  return (example.header == 0);
}

void push (int n) {
  if (example.header < example.size)
  {
    example.stack[example.header] = n;
    example.header++;
  }
}

int pop() {
  if (!isEmpty()) {
    int top = example.stack[example.header - 1];
    example.header--;
    return top;
  }
  return -1;
}

int read() {
  return !isEmpty() ? (example.stack[example.header - 1]) : -1;
}
