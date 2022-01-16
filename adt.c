struct Object {
  int number;
  char* name;
};

struct Component
{
  struct Object parent;
  int _number;
};

// prototyping
struct Object asn(int, char*);

int main(int argc, char *argv[]) {
  struct Object unit = asn(4, argv[1]);
  // * ===
  // unit.number = 1;
  // unit.name = argv[1];
  struct Component unit_component;
  unit_component.parent = unit;
  unit_component._number = 2;
  return 0;
}

// function of ADT Object
struct Object asn(int n, char *s) {
  struct Object unit;
  unit.number = n;
  unit.name = s;
  return unit;
}
