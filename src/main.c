#include "stdlib.h"
#include "stdio.h"

#include "malloc.h"

int main() {
  char* test = rtmalloc(sizeof(char));
  printf("%d\n", test == NULL);
  printf("%a\n", test);
  printf("%d\n", test);
  return 0;
}
