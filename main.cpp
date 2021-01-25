#include <iomanip>
#include <iostream>

const size_t ARRAY_SIZE = 8;

int main (int argc, char const *argv[]) {
  int A[ARRAY_SIZE] = {35, 33, 42, 10, 14, 19, 27, 44};

  int interval = 0;
  int inner, valueToInsert;

  while (interval < ARRAY_SIZE/3) {
    interval = interval * 3 + 1;
  }

  while (interval > 0) {
    for(int outer = interval; outer < ARRAY_SIZE; outer++) {
      valueToInsert = A[outer];
      inner = outer;

      while(inner > interval - 1 && A[inner - interval] >= valueToInsert) {
        A[inner] = A[inner - interval];
        inner = inner - interval;
      }
    A[inner] = valueToInsert;
    }
    interval = (interval -1)/3;
  }
}
