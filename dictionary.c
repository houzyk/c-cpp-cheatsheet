#include <stdbool.h>

struct Data
{
  char* key;
  char* value;
};


struct Dictionary
{
  int header;
  struct Data dictionary[];
};

struct Dictionary d;

// methods
char* read (char* key) {
  for (int i = 0; i < d.header; i++) {
    if (d.dictionary[i].key == key) return d.dictionary[i].value;
  }
  return 0;
}

void add (char* key, char*value) {
  if (!read(key)) {
    int head_position = d.header;
    struct Data entry;
    entry.key = key;
    entry.value = value;
    d.dictionary[head_position] = entry;
    d.header = d.header + 1;
  } else {
    for (int i = 0; i < d.header; i++) {
      if (d.dictionary[i].key == key) d.dictionary[i].value = value;
    }
  }
}
