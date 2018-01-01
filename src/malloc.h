#pragma once

#include "stddef.h"

void* rtmalloc(size_t size);
void* realloc(void* mem_ptr, size_t size);
