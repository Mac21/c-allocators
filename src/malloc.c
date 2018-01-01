#include "stddef.h"
#include "stdint.h"

#include "malloc.h"

#define BLK_SIZE 246
#define FREE_LIST_SIZE 100

typedef struct FREE_BLK_256 {
  char  data[BLK_SIZE];
} free_blk_256_t;

free_blk_256_t FREE_256_LIST[FREE_LIST_SIZE];

void* rtmalloc(size_t size) {
  free_blk_256_t* temp = &FREE_256_LIST[0];
  return (void*)temp;
}
