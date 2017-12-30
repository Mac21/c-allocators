#include "malloc.h"
#include "stddef.h"

struct FREE_BLK {
};

typedef struct FREE_BLK free_blk_t;

free_blk_t FREE_LIST[100];

void* malloc(size_t size) {
  return NULL;
}
