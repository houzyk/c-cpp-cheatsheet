struct Object {
  int number;
  char* name;
};

// prototyping
struct Object asn(int, char*);

int main(int argc, char *argv[]) {
  struct Object unit = asn(1, argv[1]);
  // * ===
  // unit.number = 1;
  // unit.name = argv[1];
  return 0;
}

// function of ADT Object
struct Object asn(int n, char *s) {
  struct Object unit;
  unit.number = n;
  unit.name = s;
  return unit;
}
